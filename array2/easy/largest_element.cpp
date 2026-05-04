#include<iostream>
using namespace std;

int main(){

	int arr[5] = {43,2,4,555,2};
	int sml = 0;
	for(int i = 0; i<5; i++){
		if(sml<arr[i]){
			sml = arr[i];
		}
	}

	cout << sml;


	return 0;
}
