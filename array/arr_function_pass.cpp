#include<iostream>
using namespace std;

void disp1(int *x,int n);
void disp2(int x[],int n);

int main(){
	int arr[] = {10,20,30,40,50};
	disp1(arr,5);
	cout << endl;
	disp2(arr,5);
	return 0;
}

void disp1(int *x,int n){
	for(int i = 0; i < n; i++){
		cout << *(x+i) << endl;
	}
}

void disp2(int x[], int n){
	for(int i = 0; i < n; i++){
		cout << x[i] << endl; 
	}
}
