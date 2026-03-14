#include<iostream>
using namespace std;
int main(){

	int Lnum = 20;
	int Snum = 15;
	int temp = Snum;
	while(Lnum%Snum > 0){
		temp = Snum;
		Snum = Lnum%temp;
		Lnum = temp;
	}
	cout << Snum << endl;

	return 0;
}
