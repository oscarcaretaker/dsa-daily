#include<iostream>
using namespace std;

int main(){

	int num = 8;
	int arr[num] = {1,num};
	int k = 2;
	for(int i = 2; i<num; i++){
		if(num%i == 0){
			arr[k] = i;
			k++;
		}
	}

	// printing the array
	for(int i = 0; i<sizeof(arr)/4; i++){
		cout << arr[i] << " ";
	}

	return 0;
}
