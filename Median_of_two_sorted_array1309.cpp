#include<bits/stdc++.h>
using namespace std;

double median_of_two_sorted_array(vector<int> &one,vector<int> &two){
	vector<int> merge;
	for(int i=0;i<one.size();i++){
		merge.push_back(one[i]);
	}
	for(int i=0;i<two.size();i++){
		merge.push_back(two[i]);
	}
	
	sort(merge.begin(),merge.end());

	int total= merge.size();
	if(total%2==1){
		// odd numbers 
		return static_cast<double>(merge[total/2]);

	}


	if(total%2==0){
		//even 
		int mid1= merge[total/2];
		int mid2= merge[total/2-1];
		return (static_cast<double>(mid2)+static_cast<double>(mid1))/2.0;

	}
}

int main(){
	int n;
	cin>>n;
	vector<int> one(n);
	for(int i=0;i<n;i++){
		cin>>one[i];

	}
	int x;
	cin>>x;
	vector<int> two(x);
	for(int i=0;i<x;i++){
		cin>>two[i];

	}
	int result= median_of_two_sorted_array(one,two);
	cout<<result;
	return 0;
	




}