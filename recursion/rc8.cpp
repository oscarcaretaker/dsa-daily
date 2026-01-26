#include<iostream>
using namespace std;

int fibo(int n);

int main(){
	int num = 7; // ans = 8
	cout << fibo(num) << endl;
	return 0;
}

int fibo(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	if(n == 0){
		return 0;
	}
	return (fibo(n-1)+fibo(n-2));
}
