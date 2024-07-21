#include<bits/stdc++.h>
using namespace std;

int main(){
    
	int d,x,y,k;
	cin>>d>>x>>y>>k;
	int w;
	w = d/x;
	int b;
	b= d/y +k;

	if(w>b){
		cout<<"Bike"<<endl;

	}else if(b>w){
		cout<<"Walk"<<endl;
	}else{
		cout<<"Walk"<<endl;
	}

}