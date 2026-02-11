// 11-FEB-26
// Author : AMAN TIWARI
// LEFT ROTATE THE ARRAY BY ONE.
#include<iostream>
using namespace std;

int main(){
	int n = 4;
	int arr[n] = {20,80,100,250};
	
	// BEFORE
	for(int i = 0; i < n; i++){
		cout << arr[i] <<" ";
	}
	cout << endl;

	int temp = arr[n-1];
	for(int i = n-2; i>=0 ;i--){
		arr[i+1] = arr[i];
	}
	arr[0] = temp;

	//AFTER
	for(int i =0; i < n;i++){
		cout << arr[i] <<  " ";
	}

	cout << endl;


	return 0;
}
