#include<bits/stdc++.h>
using namespace std;
void Selection_sort(vector<int> &v){
	int n = v.size();

	for(int i=0;i<n-1;i++){
		int min_indx=i;
		for(int j=i+1;j<n;j++){
			if(v[j]<v[min_indx]){
				min_indx=j;
			}
		}
		if(min_indx!=i){
			swap(v[i],v[min_indx]);
		}


	}


}

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	Selection_sort(v);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}cout<<endl; 
}