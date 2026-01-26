#include<iostream>
using namespace std;

int reverse_array(int n, int x[]);

int main(){
       int arr[] = {5,4,3,2,1};
       int num = 5;
       reverse_array(num, arr);
       return 0;
}

int reverse_array(int n, int x[]){

	for(int i = 0; i<=n/2; i++){
		int temp = x[i];
		x[i] = x[n-1-i];
		x[n-1-i] = temp;
	}
	for(int i = 0;i<n; i++){
		cout << x[i] << " , ";
	}

	return 0;

}
