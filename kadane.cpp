//Kadane's algorithm is an optimal solution of O(n) to find the maximum sum of contiguous sub-array. This is very algorithm if you are planning to crack interviews at product based companies
#include<climits>
using namespace std;

int maxsum(int arr[], int size){
        int csum = 0;
        int osum = INT_MIN;

        for(int i = 0; i<size; i++){
                csum = csum + arr[i];
                if(osum < csum)
                        osum = csum;
                if(csum < 0)
                        csum = 0;
        }
        return osum;
}

int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
        }
        int max = maxsum(arr, n);
        cout<<max<<endl;
        return 0;
}
~  
