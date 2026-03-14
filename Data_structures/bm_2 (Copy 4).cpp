#include<iostream>
using namespace std;

int main(){
        int n = 12345;
	int ans = n%10;
	n = n/10;

	while(n>0){
		ans =  ans*10 + (n%10);
		n = n/10;
	}
	cout << ans << endl;
	return 0;
}
