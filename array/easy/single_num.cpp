// SINGLE THE ELEMENT WHICH APPEARED ONLY ONCE IN ARRAY.
#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,2,1,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = ans^arr[i];
    }

    cout << ans << endl;
    return 0;
}

