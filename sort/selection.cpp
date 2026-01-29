#include<iostream>
using namespace std;

int main(){
	int temp, n =7;
	int arr[n] = {10,90,92,22,82,1,2};

	// before 
	for(int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	//SELECTION SORT
	for(int i = 0; i<n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[j]<arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	// printing of array
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
