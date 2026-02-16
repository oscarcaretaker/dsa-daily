#include<iostream>
using namespace std;

int main(){
	int arr[] = {8, 2, 4, 5, 3, 7, 1};
	int sum = 0, n = 0;
	for(int i = 0; i<size(arr); i++){
		if(arr[i]>n){
			n = arr[i];
		}
		sum = sum + arr[i];
	}

	n = ((n*(n+1))/2) - sum;
	cout << n << endl;
	
	return 0;
}
