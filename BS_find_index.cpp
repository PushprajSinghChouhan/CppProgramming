#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int to_find;
	cin>>to_find;
	int lo=0;
	int hi=n-1;
	int mid;
	
	while(hi-lo>1){
		mid= (hi-lo)/2;
		if(v[mid]<to_find){
			lo=mid+1;
		}else{
			hi=mid;
		}
	}
	if(to_find==v[lo]){
		cout<<lo;
	}else if(to_find==v[hi]){
		cout<<hi;
	}else{
		cout<<"Not in the list";
	}
	
	

}