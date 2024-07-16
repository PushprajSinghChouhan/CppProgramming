#include<bits/stdc++.h>
using namespace std;

void printV(vector<int>v){
	cout<<"size of vector"<<" "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v(5,3);

	printV(v);
	v.push_back(11);
	printV(v);
	v.pop_back();
	printV(v);




}