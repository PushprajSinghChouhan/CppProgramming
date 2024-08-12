#include<bits\stdc++.h>
using namespace std;

int main(){
	unordered_set<string>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		s.insert(str);

	}
	int q;
	cin>>q;
	while(q--){
		string str;
		cin>>str;
		auto it = s.find(str);
		if(it!=s.end()){
			cout<<"Yes"<<endl;
		}else{
			cout<<"Not Found"<<endl;
		}



	 
	}
	
}