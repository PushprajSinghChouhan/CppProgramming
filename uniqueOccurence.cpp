#include<bits/stdc++.h>
using namespace std;


bool uniqueOccurence(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
		if(arr[i]==0){
		return 0;
		}else{ 
		return 1;
}

	}
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	uniqueOccurence( arr, n);

}