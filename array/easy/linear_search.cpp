#include<iostream>
using namespace std;

int main(){
	int num = 20;
	int arr[] = {1,33,29,20,11,22,34,32,55,32};

	for(int i = 0; i < 10; i++){
		if(arr[i] == num){
			cout << i;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}
