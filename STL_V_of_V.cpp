#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> &v){
	cout<<"size of vector of vector is "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int N;
	cin>>N;
	vector<vector<int>> v;
	for(int i=0;i<N;i++){
		int n;
		cin>>n;
		vector<int> temp;
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}

	for(int i=0;i<v.size();i++){
		printV(v[i]);
	}



}