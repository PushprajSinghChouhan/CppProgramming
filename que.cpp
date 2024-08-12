#include<bits\stdc++.h>
using namespace std;

int main(){
	queue<string>q;
	q.push("Hello");
	q.push("My");
	q.push("Name");
	q.push("is: ");

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
}