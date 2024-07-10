#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return key;
		}else{
			
		}
	}
	return 0;
}

int main(){
	

	 int key;
	 cin>>key;
	 int arr[6]={1,2,3,4,5,6};
	 bool found= search(arr,6,key);
	 if(found){
		cout<<"Element Present"<<endl;
	 }else{
		cout<<"Not Found"<<endl;
	 }

	
	



}
