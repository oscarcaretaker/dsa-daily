#include<iostream>
using namespace std;

int owl(int x);

int main(){
	owl(5);
	return 0;
}

int owl(int x){
	if(x == 1){
		cout << x << endl;
		return 0;
	}
	else{
		cout << x << endl;
		return owl(x-1);
}
}
