#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for(long long i=2;i<=n;i++){
		int sum=1;
		for(long long j=2;j*j<=i;j++){
			if(i%j==0){
			sum+=j+i/j;
		}
		  }  
		
		if(sum==i){
				cout<<i<<" ";
			}
	}
}