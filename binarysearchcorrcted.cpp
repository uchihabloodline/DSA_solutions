#include <bits/stdc++.h>

using namespace std;

int binarysearch(vector<int> arr, int size, int target){
	
	int low =0;
	int high = size-1;
	int mid;

	while(low<=high){

	mid = low + (high - low)/2;

	if(arr[mid] == target)
	return mid;

	if(arr[mid] < target)
	low = mid+1;

	else 
		high = mid-1;

	}
	if(low>high){
	cout<<"element was not found";
	return -1;
}
}		
	

		int main(){

		binarysearch(arr[1,2,3,4,5,6,7,8,12,34,54],11,5);

		return 0;
		}