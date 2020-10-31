#include<bits/tdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		ll arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		cin>>k;
		sort(arr,arr+n);
		cout<<arr[k-1]<<endl;
	}
	return 0;
}
