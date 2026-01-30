#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n = 0, ans = 0;
	int num = 1111;
	while(num>0){
		ans = ans + ((num%10)*(pow(2,n)));
		n++;
		num = num/10;
	}

	cout << ans << endl;
	return 0;
}
