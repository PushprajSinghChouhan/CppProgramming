#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,string> m;
	m[1]="abc";
	m[11]="hghg";
	m[10]="kaka";
	m.insert({20,"twenty"});
	map<int,string> :: iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}cout<<"\n";
	
	for(auto value:m){
		cout<<value.first<<" "<<value.second<<endl;
	}
    
}