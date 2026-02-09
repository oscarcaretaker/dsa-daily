#include<iostream>
using namespace std;

int main(){
	int s = 10;
//	int arr[s] = {23, 7, 91, 45, 12, 68, 34, 5, 77, 29};
	int arr[s] = {1, 3, 5, 7, 9, 12, 15, 18, 21, 25};
	
	int count = 0;

	for(int i = 0; i < s - 1; i++){
		if(arr[i] <= arr[i+1]){
			count++;
		}
	}

	if(count == s-1){
		cout << "True : Array is sorted.";
	}
	else{
		cout << "False : Array is not sorted";
	}

	return 0;
}
