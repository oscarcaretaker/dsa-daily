#include<iostream>
using namespace std;

int main(){
	int n = 9;
	int arr[n] = {1,1,2,2,2,3,4,4,4};
	
	int x = 1;
	int uniq[n];

	int base = arr[0];
	uniq[0] = base;

	for(int i = 0; i < n; i++){
		if(arr[i] == base){
			continue;
		}
		else{
			base = arr[i];
			uniq[x] = base;
			x++;
		}
	}
	for(int i = 0; i < n; i++){
		if(i<x){
			arr[i] = uniq[i];
			}
		else{
			arr[i] = 0;
		}
	}

	// printing
	for(int i = 0; i < n; i++){
		cout << arr[i] << "   ";
	}

	cout << endl;
	return 0;
}	
