#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int num;
	cin >> num;
	int ans =0;
	int cp = num;
	while(num>0){
		ans = ans + pow(num%10,3);
		num = num/10;
	}
	if(cp == ans){
		cout << "Is amstrong" << endl;
	}
	else{
		cout << "not";
	}


	return 0;
}

