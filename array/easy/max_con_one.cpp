#include<iostream>
using namespace std;

int main(){
	int ans = 0, temp = 0;
	int arr[] =  {1, 1,1,0,1,1,1,1,1, 0, 1, 1, 1};
	for(int i = 0; i< size(arr); i++){
		if(arr[i] == 0){
			temp = 0;
		}
		if(arr[i] == 1){
			temp = temp+1;
		}
		if(temp>ans){
			ans = temp;
		}
	}
//	cout << size(arr) << endl;
	cout << ans << endl;
	return 0;
}
