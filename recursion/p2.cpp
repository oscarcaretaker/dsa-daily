#include<iostream>
using namespace std;

int pname(int x);

int main(){

	int num = 13;
	pname(num);
	return 0;
}

int pname(int x){
	if(x == 1){
		cout << "Aman" << endl;
		return 0;
	}
	else{
		cout << "Aman" << endl;
		return pname(x-1);
	}
}
