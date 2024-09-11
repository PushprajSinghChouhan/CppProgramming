#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int x){
	if(x<0) return false;

	int orignal =x;
	long reverse = 0;

	while(x>0){
		int digit =x%10;
		reverse=reverse*10+digit;
		x=x/10;

	}
	return orignal==reverse;

}

int main(){	
	int t;
	cin>>t;
	while(t--){


	int x;
	cin>>x;
	if (ispalindrome(x)) {
        cout << "True"<< endl;
    } else {
        cout <<"False" << endl;
    }
	}

}