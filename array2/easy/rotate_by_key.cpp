#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int k = -5; // rotate key (negetive for left and positive for right)
	int n = 5; //	array size
	int arr[n] = {90,80,70,60,50};

	//BEFORE
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	//RIGHT SHIFT
	if(k>=0){
		for(int j = 0; j < k; j++){
			int temp = arr[n-1];
			for(int i = n-2; i >= 0; i--){
				arr[i+1] = arr[i];
			}
			arr[0] = temp;
		}
	}
	// LEFT SHIFT
	else{
		for(int j = 0; j < abs(k); j++){
			int temp = arr[0];
			for(int i = 1; i<=n-1; i++){
				arr[i-1] = arr[i];
			}
			arr[n-1] = temp;
		}
	}

	//AFTER
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
		}
	cout << endl;

	return 0;
}
