#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    //Using unordered map
	    unordered_set<int> s;
	    cin>>m>>n;
	    ll arr1[m];
	    ll arr2[n];
	    for(int i=0; i<m; i++){
	        cin>>arr1[i];
	        s.insert(arr1[i]);
	    }
	    for(int i=0; i<n; i++){
	        cin>>arr2[i];
	        s.insert(arr2[i]);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
