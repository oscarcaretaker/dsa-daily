#include <bits/stdc++.h>
using namespace std;

int main(){

	int arr[] = {1,1,1,1};		
		
   map<int, int> mp;
    for (int i = 0; i < 4; i++) {
        mp[arr[i]]++;
    }


    for(int i = 0; i<1;i++)
    {
	    cout << mp[i] << i ;
    }
    return 0;
}

