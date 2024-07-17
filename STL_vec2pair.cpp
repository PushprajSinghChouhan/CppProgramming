#include<bits/stdc++.h>
using namespace std;

void printV(vector<pair<int,int>> &v){
	cout<<v.size()<<" \n";
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<","<<v[i].second<<endl;

	}
}

int main(){
	vector<pair<int,int>> v={{5,65},{1,4},{2,3}};
	printV(v);

	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int x,y;
	    cin>>x>>y;
		v.push_back({x,y});

	}
	printV(v);

}