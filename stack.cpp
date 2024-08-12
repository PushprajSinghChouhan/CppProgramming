#include<bits\stdc++.h>
using namespace std;

int main(){
	stack<int>s;
	s.push(2);
	s.push(3);
	s.push(120);
	s.push(90);

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}