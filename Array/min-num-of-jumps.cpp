//Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then cannot move through that element.

#include<bits/stdc++.h>
using namespace std;
int jumpFunc(int arr[], int n){
	if(n==0 || arr[0]==0)
		return -1;
	int jump[n];
	jump[0]=0;
	for(int i=1; i<n; i++){
		jump[i]=INT_MAX;
		for(int j=0; j<i; j++){
			if(j<=j+arr[j]){
				jump[i]=min(jump[j]+1, jump[i]);
			}
		}
	}
	if(jump[n-1]==INT_MAX)
		return -1;
	return jump[n-1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i, j;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		cout<<jumpFunc(arr, n)<<endl;
	}
	return 0;
}
