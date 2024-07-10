#include<bits/stdc++.h>
using namespace std;


void swapAlternate(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}
	}
}

void printAlternate(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int even[8] ={1,2,3,4,5,6,7,8};
	int odd[5]={5,4,3,2,1};

	swapAlternate(even,8);
	printAlternate(even,8);

	cout<<endl;

	swapAlternate(odd,5);
	printAlternate(odd,5);

	
}