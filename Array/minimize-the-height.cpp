#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int getMinDiff(int arr[], int n, int k){
			if(n==1)
				return 0;
			sort(arr, arr+n);
			
			//The option is to minimize the height by either choosing
			//or not choosing k
			//If we don't choose to use k then arr[n-1] and arr[0]
			//are the max and min height
			//So minimum od these two are taken later
			
			int ans = arr[n-1] - arr[0];
			int big = arr[n-1] - k; //possible big
			int small = arr[0] + k; //possible small

			if(small>big)
				swap(big,small);
			for(int i=0; i<n; i++){
				int add = arr[i]+k;
				int subtract = arr[i]-k;

				if(add<=big || subtract>=small)
					continue;
				if(big-subtract<=add-small)
					small=subtract;
				else
					big=add;
			}
			return min(ans, big-small);
		}
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>k>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		Solution objl
			auto ans = obj.getMinDiff(arr, n, k);
		cout<<ans<<"\n";
	}
	return 0;
}
