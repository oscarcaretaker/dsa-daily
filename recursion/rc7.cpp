#include<iostream>
#include<string>
using namespace std;

int palindrome(string a, int n);
int main(){
	string arr  = "ABCDCBAc";
	int n = 8;
	int ans = palindrome(arr, n);
	if(ans == (n/2)+1){ 
		cout << "Is palindrome";
	}
	else{ 
		cout << "Not";
	}
	cout << ans << endl;
	return 0;
}

int palindrome(string a, int n){
	int x = 0;
	for(int i = 0; i<=n/2;i++){
		if(a[i] == a[n-1-i]){
			x++;
		}
	}
	return x;
}
