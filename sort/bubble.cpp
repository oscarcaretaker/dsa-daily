#include<iostream>
using namespace std;

int main(){
	
	// array declaration
	int n = 5;
	int arr[n] = {60,30,10,20,90};
	int temp; // swapping var
	int max_idx; // stores the index holding the max value in current iteration 

	// before
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	// BUBBLE sort
	for(int i = n-1; i>=0; i--){
		max_idx = i;
		for(int j = 0; j<i ;j++){
			if(arr[i]<arr[j]){
					max_idx = j;
			}
		}
		temp = arr[max_idx];
		arr[max_idx] = arr[i];
		arr[i] = temp;


	}	

	// Printing
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
