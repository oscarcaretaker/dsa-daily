#include<iostream>
using namespace std;

int main(){
	int target = 14;
	int nums[] = {2,6,5,8,11};
	int n = sizeof(nums)/sizeof(nums[0]);
	int x = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(nums[i] + nums[j] == target){
				cout << i << " " << j << endl;
				 x = 1;
				break;
			}
		}
		if(x == 1) break;
	}

	return 0;
}
