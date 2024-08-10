#include<bits\stdc++.h>
using namespace std;

void Print(set<string>&s){
	for(string value:s){
		cout<<value<<endl;
	}
	for(auto it=s.begin();it!=s.end();++it){
		cout<<(*it)<<endl;
	}
}

int main(){
	set<string>s;
	s.insert("abc");
	s.insert("a");
	s.insert("ab");
	s.insert("c");
	s.insert("abcd");
	auto it= s.find("ababc");
	if(it!=s.end()){
		cout<<(*it)<<endl;

	}else{
		cout<<"Not Found";
	}

}