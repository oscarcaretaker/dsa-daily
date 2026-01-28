#include<iostream>
using namespace std;

int main(){
		int n = 10;
		int nums[n] = {1,21,2,1,3,5,4,4,3,2};
		int hn = 0;

		for(int i = 0; i<n; i++){
			if(hn<nums[i]){
				hn = nums[i];
			}
		}
  		hn = hn + 1;

		int hash_arr[hn] = {0}; // hashing array

		for(int i = 0; i<n; i++){
			hash_arr[nums[i]] = hash_arr[nums[i]] + 1;
		}

		for(int i = 0; i<hn; i++){
			if(hash_arr[i] != 0){
				cout << "Number "<< i << " | Frequency " << hash_arr[i] << endl;
			}
		}
	
		return 0;
}
