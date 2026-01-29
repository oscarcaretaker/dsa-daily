#include<iostream>
using namespace std;

int main(){	

	// array declaration
	int n = 10, temp = 0;
	int arr[n] = {1,3,4,7,5,2,11,2,9,93};

	//Insertion sort
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(arr[i] < arr[j]){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
			}
		}
	}

	// printing arr
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}
