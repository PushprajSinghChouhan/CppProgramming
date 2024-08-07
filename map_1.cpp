#include<bits/stdc++.h>
using namespace std;

void Print(map<int,string>&m){
	cout<<m.size()<<endl;
	for(auto it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
}

int main(){
	map<int,string>m;
	m[3]="TuJhaMaela"; //O(log(n))
	m[2]; //O(log(n))
	m[1]="ab";
	m[11]="papa";
	m[12]="mumma";

	auto it = m.find(2);
	if(it!=m.end())
		m.erase(it);
	
	if( it == m.end()){
		cout<<"No Value"<<"\n";
	}else{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}     
	Print(m);
}