#include <bits/stdc++.h>
using namespace std;

int main(){

	int arr[] = {1,1,1,1};		
		
	map<int, int> mp; // map declaration

	for (int i = 0; i < 4; i++) {
        mp[arr[i]]++;
    		}
	cout << mp[2] << endl;
	cout << mp[1] << endl;

    	return 0;
}

