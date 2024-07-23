#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=5;
	
	int arr[5]={20,50,40,10,30};
	for(int j=0;j<n-1;j++){
	    for(int i=0;i<n-1-j;i++){
		
		  if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);

			
		   }
		}
		
		
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

}