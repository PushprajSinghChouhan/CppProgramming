#include<bits\stdc++.h>
using namespace std;

int upperBound(vector<int>&v,int element){
	int lo=0,hi=v.size()-1;
	int mid;
	while(hi-lo>1){
		mid=(lo+hi)/2;
		if(v[mid]<=element){
			lo=mid+1;
		}else{
			hi=mid;
		}

	}
	if(v[lo]>element){
		return lo;
	}
	if(v[hi]>element){
		return hi;
	}
	return -1;

}

int main(){
	
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
	cin>>v[i];
}
int element;
cin>>element;
int ub= upperBound(v,element);
cout<<"index "<<ub<<"  "<<"upper bound value "<<(ub!=-1?v[ub]:-1)<<endl;

}