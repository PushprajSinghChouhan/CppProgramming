#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
		    sum=sum+j;}
		}
			if(sum==i)
			cout<<sum<<"\n";
				
			
		}
	}
 