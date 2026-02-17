//Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
#include <iostream>
using namespace std;

int main(){
	int k =6;
	int arr[] = {-3,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);//size of array
	
	int ans = 0;
	for(int i = 0; i<n; i++){
		int sum = 0, count = 0;
		for(int j = i; j<n; j++){
			sum = sum + arr[j];
			count++;
			if(sum == k){
				if(count>ans){
					ans = count;
				}
				break;
			}
		}
	}
	cout << ans<< endl;
	return 0;
}
