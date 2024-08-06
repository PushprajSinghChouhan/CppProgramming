#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v={1,2,3,4,5};
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}cout<<endl;
    
	for(int value :v){
		cout<<value<<" ";
	}

	for( int &value: v){
		value++;
	}cout<<endl;
	for(int i=0;i<v.size();i++){


		for(int &value :v){
			cout<<value<<" ";
			value++;
		}cout<<endl;
}

vector<pair<int,int>> p={{1,2},{3,4},{5,6}};
for(pair<int,int> value: p){        // Range function
	cout<<value.first<<" "<<value.second<<" "<<endl;
}


}
