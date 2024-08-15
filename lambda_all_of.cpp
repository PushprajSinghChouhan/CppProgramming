#include<bits\stdc++.h>
using namespace std;

int main(){
	vector<int>v={2,4};
	int print_even_or_not=all_of(v.begin(),v.end(),[](int x){return x%2==0;});
	
	cout<<print_even_or_not;
}