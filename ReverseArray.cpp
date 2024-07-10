#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
		
		
	}
   
   for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}


}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[10];
    for(int i=0;i<n;i++){
	  cin>>arr[i];
	}
	cout<<"\n";

	for(int i=(n-1);i>=0;i--){

		cout<<arr[i]<<" ";
	}
	
	reverse(arr,10);

	
}