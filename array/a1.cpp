#include<iostream>
using namespace std;

int main(){
	
	int arr[30]; // array declaration
	int avg, sum = 0,i;

	for(i =0; i<30; i++){
		cin >> arr[i];
	}
	for(i = 0;i<30;i++){
		sum = sum + arr[i];
	}
	avg = sum/30;
	cout << avg << endl;

	return 0;
}
