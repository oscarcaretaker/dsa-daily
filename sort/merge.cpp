#include<iostream>
#include<vector>
using namespace std;
// 1-2-26
// Merge Sort Algo Implementation
// Author : Aman

void merge(vector<int> &arr, int st, int mid, int end){
		vector<int> temp;
		int i = st;
		int j = mid+1;
		while(i <= mid && j <= end){
			if(arr[i] <= arr[j]){   // if > then sorting in decending order.
				temp.push_back(arr[i]);
				i++;
			}
			else{
				temp.push_back(arr[j]);
				j++;
			}
		}
		//remaining ones
		while(i <= mid){
			temp.push_back(arr[i]);
			i++;
		}
		while(j <= end){
			temp.push_back(arr[j]);
			j++;
		}
		// from temp to og array
		for(int idx = 0; idx < temp.size(); idx++){
			arr[idx + st] = temp[idx];
		}

}
// passing array by reference 
void mergeSort(vector<int> &arr, int st, int end){
		if(st < end){
			int mid = st + (end - st)/2; // subtle way of calculating mid

			//left half
			mergeSort(arr, st, mid);
			
			// right half
			mergeSort(arr,mid+1,end);
			
			// calling merge
			merge(arr,st,mid,end);
		}
}

int main(){

	vector<int> prr = {30,20,10,25,32,11}; // array initilization
	mergeSort(prr, 0, prr.size() -1);
	for(int val : prr){
		cout << val << " ";
	}
	cout <<endl;

	return 0;
}
