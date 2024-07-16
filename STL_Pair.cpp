#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,string> p;
	p= {1,"HelloWorld"};
	cout<<p.first<<" "<<p.second<<" "<<endl;
	pair<int,string> &p1=p;
	p1.first=3;
	p1.second="Ram Ram";
	cout<<p.first<<"As a refrence"<<p.second<<endl;
	cout<<p1.first<<"As a refrence"<<p1.second<<endl;

	//AS a value
	pair<int,string> p2=p;
	p2.first=404;
	p2.second="Jai Mata Di";
	cout<<p.first<<" "<<"As a Refrence"<<" "<<p.second<<endl;
	cout<<p2.first<<" "<<"As a Value"<<" "<<p2.second<<endl;

	//Array
	int a[]={1,2,3};
	int b[]={2,3,4};
	pair<int,int> p_array[3];
	p_array[0]={1,2};
	p_array[1]={2,3};
	p_array[2]={3,4};
	swap(p_array[0],p_array[2]);
	
	for(int i=0;i<3;i++){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
	pair<int,string> psc;
	psc = make_pair(138,"Pushpraj Singh Chouhan");
	cout<<psc.first<<" "<<psc.second<<endl;

}