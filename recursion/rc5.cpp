#include<iostream>
using namespace std;

int fact(int x);

int main(){
	cout << fact(5);
	return 0;
}
int fact(int x){
	if(x == 1){ return 1;	}
	return ( x*fact(x-1) );
}
