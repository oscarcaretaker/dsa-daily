#include<iostream>
using namespace std;

int main(){
	
	int num = 1121;
	int rvs = 0;
	int cp = num;
	while(num>0){
		rvs = rvs*10 + (num%10);
		num = num/10;
	}
	if(cp == rvs){
		cout << "Is palindrome" << endl;
	}
	else{
		cout << "Not a palindrome." << endl;
	}
	return 0;
}
