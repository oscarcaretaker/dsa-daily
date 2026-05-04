//Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
#include <iostream>
using namespace std;

int main(){
	int k =0;
	int arr[] = {9, -3, 3, -1, 6, -5};
	int n = sizeof(arr)/sizeof(arr[0]);//size of array
	
	int right = 0;
	int left = 0;
	int sum = arr[0];
	int ans = 0;

	while(right<n){
		
		while(sum>0 && left<=right){
			sum = sum - arr[left];
			left++;
		}

		if(sum == k){
			if(right - left + 1 > ans){
				ans = right - left + 1;
			}
		}

		right++;
		if(right<n){
			sum = sum + arr[right];
		}

	}

	cout << ans<< endl;
	return 0;
}
