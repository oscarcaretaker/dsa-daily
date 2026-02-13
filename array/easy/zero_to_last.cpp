// MORE ALL ZERO TO LAST.
#include<iostream>
using namespace std;

int main(){
		
	int n = 8;
	int arr[n] = {1,0,2,3,0,4,0,1};
	int count_non_zero = 0;

	//Before
	for(int i = 0; i < n; i++){
		if(arr[i] != 0){
			count_non_zero+=1;
		}
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << count_non_zero;
	//logic
	int s = 0;
	for(int i=0; i<n; i++){
		if(arr[i] != 0){
			int temp = arr[s];
			arr[s] = arr[i];
			arr[s] = temp;
			count_non_zero-=1;
			s+=1;
		}
		if(count_non_zero == 0){
			arr[i] = 0;
		}
	}

	//AFTER
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	

	return 0;
}
