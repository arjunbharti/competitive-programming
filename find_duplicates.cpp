#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> duplicates(int arr[], int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		vector<int> ans = duplicates(a,n);
		for(int i : ans)
			cout<<i<<' ';
		cout<<endl;
	}
	return 0;
}

vector<int> duplicates(int a[], int n){
	map<int,int> sol;
	vector<int> vec;
	for(int i=0; i<n; i++){
		sol[a[i]]++;
	}
	for(auto i=sol.begin(); i!=sol.begin(); i++){
		if(i -> second > 1){
			vec.push_back(i -> first);
		}
	}
	if(vec.size()==0){
		vec.push_back('-1');
		return vec;
	}
	return vec;
}
