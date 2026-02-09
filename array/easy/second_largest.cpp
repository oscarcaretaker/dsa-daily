#include<iostream>
using namespace std;

int main(){

	int arr[10] = {23, 7, 91, 45, 12, 68, 34, 5, 77, 29};
	int mi = 0;
	for(int i = 0; i < 10; i++){
		if(arr[mi] < arr[i]){
			mi = i;
		}
	}
	int sm = 0;
	for(int i = 0; i < 10; i++){
		if(sm < arr[i] && i != mi){
			sm = arr[i];	
		}
	}
	
	cout << sm;
	return 0;
}
