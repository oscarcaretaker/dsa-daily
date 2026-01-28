#include<iostream>
using namespace std;

int main(){
	
	int n = 5;
	int nums[n] = {4,4,5,5,6};
	int hn = 0, max_freq = 0, ans;

	//calculating lenght of hash array
	for(int i = 0; i<n; i++){
		if(hn< nums[i]){
			hn = nums[i];
		}
	}
	hn = hn + 1;
	
	// precomputing
	int hash_arr[hn] = {0};
	for(int i = 0; i<n; i++){
		hash_arr[nums[i]]+=1;
	}

	// max frequency
	for(int i = 0; i< hn ; i++){
		if(hash_arr[i] != 0){
			if(max_freq < hash_arr[i]){
				max_freq = hash_arr[i];
				ans = i;
			}
		}

	}

	cout << ans << endl;
	cout << max_freq << endl;

	return 0;
}
