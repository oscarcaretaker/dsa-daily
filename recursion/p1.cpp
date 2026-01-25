#include<iostream>
using namespace std;

int sum(int x);

int main(){
	int num, ans;
	cin >> num;
	ans = sum(num);
	cout << num << endl;
	cout << ans << endl;
	return 0;
}

int sum(int x){
	int k = 0;
	if (x<10){
		return x;
	}
	else{
		k = x%10 + sum(x/10);
		return k;
	}
}
