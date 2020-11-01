#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		int arr[size];
		for(int i=0; i<size; i++){
			cin>>arr[i];
		}
		reverse(arr, arr+size);
		reverse(arr+1, arr+size);
		for(int i=0; i<size; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
