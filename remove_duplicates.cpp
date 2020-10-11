//Removing duplicate elements from a sorted array

#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(int [], int);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int n=remove_duplicates(a, sizeof(a)/sizeof(a[0]));
		for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

int remove_duplicates(int a[], int n){
	int c=1;
	vector<int> v;
	v.push_back(a[0]);
	for(int i=1; i<n; i++){
		if(a[i-1] != a[i]){
			c++;
			v.push_back(a[i]);
		}
	}
	for(int i=0; i<v.size(); i++){
		a[i] = v[i];
	}
	return c;
}
