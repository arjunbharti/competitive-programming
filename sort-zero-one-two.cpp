//Sorting an array consisting on zero's, one's and two's - Dutch National Flag Algorithm
#include<iostream>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int size;
		int arr[size];
		for(int start=0; start<size; start++){
			cin>>arr[start];
		}
		//initializing three counters to keep count of number of zero's, one's and two's
		int counter0=0; int counter1=0; int counter2=0;

		//iterating through each element of the array and incrementing the corresponding counter
		for(int start=0; start<size; start++){
			if(arr[start]==0){
				counter0++;
			}
			else if(arr[start]==1){
				counter1++;
			}
			if(arr[start]==2){
				count2++;
			}
		}

		int x = count0; int y = count1; int z = count2;
		//regenerating the initial array
		
		for(start=0; start<x; start++){
			arr[start]=0;
		}
		for(start=x; start<x+y; start++){
			arr[start]=1;
		}
		for(start=x+y; start<x+y+z; start++){
			arr[start]=2;
		}

		for(int start=0; start<n; start++){
			cout<<arr[start]<<" ";
		}
		cout<<" "<<endl;
	}
	return 0;
}
