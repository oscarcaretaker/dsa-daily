#include<iostream>
using namespace std;

int sum(int x);

int main(){
	cout << sum(3);
	return 0;
}

int sum(int x){
	if(x == 1){
		return 1;
	}
	else{
		return (x+sum(x-1));
	}
}
