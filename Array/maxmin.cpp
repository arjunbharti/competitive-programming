#include<iostream>
using namespace std;

//using structure to get two values
struct Pair{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int low, int high){
	struct Pair minmax, mml, mmr;
	int mid;

	//if there is only one element in the array
	if(low==high){
		minmax.max = arr[low];
		minmax.min = arr[low];
		return minmax;
	}

	//if there are two elements in the array
	if(high == low+1){
		if(arr[low]>arr[high]){
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else{
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}

	//If there are more than two elements in the array
	mid = (low+high)/2;
	mml = getMinMax(arr, low, mid);
	mmr = getMinMax(arr, mid+1, high);

	//compare minimum of two parts
	if(mml.min < mmr.min)
		minmax.min = mml.min;
	else
		minmax.min = mmr.min;

	//Compare maximums of two parts
	if(mml.max > mmr.max)
		minmax.max = mml.max;
	else
		minmax.max = mmr.max;
	return minmax;
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	struct Pair minmax = getMinMax(arr,0,size-1);
	cout<<"Minimum element is: "<<minmax.min<<endl;
	cout<<"Maximum element is: "<<minmax.max<<endl;
	return 0;
}
