#include<iostream>
using namespace std;

int main(){

	int n = 5;
	for(int i = 5; i >= 1; i--){
		char aman = 'A';
			for(int j = i; j>=1; j--){
				cout << aman;
				aman = aman +1 ;
			}
		cout << endl;
	}
return 0;
}
