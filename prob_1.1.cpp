#include<bits\stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int N,K;
		cin>>N>>K;
		multiset< long long >bags;
		for(int i=0;i<N;i++){
			long long count_candies;
			cin>>count_candies;
			bags.insert(count_candies);
		}
		long long max_count=0;
		for(int i=0;i<K;i++){
			auto it = (--bags.end());
			long long count_candies=(*it);
			max_count+=count_candies;
			bags.erase(it);

			bags.insert(count_candies/2);

		}
		cout<<max_count<<endl;
	}
}