#include<iostream>
using namespace std;
// hashing basic code

int main(){
	
	int arr_n = 5;
	int arr[arr_n] = {2,2,9,9,3};
	int qr_n = 3;
	int qr[] = {3,9,2};
		
	int hash_array[10];
	for(int i = 0; i < 10; i++){
		hash_array[i] = 0;
		for(int j = 0; j < arr_n; j++){
			if(arr[j] == i){
				hash_array[i]++;
			}
		}
	}

	for(int n  =0; n<10; n++){
		cout << n << " " << hash_array[n] << endl;
	}


	return 0;
}
