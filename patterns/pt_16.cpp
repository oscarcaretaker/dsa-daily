#include<iostream>
using namespace std;

int main(){
	char aman = 'A';
	for(int i = 1; i<=26; i++){
                for(int j = 1; j<=i;j++){
                    cout << aman;
		}
        	cout << endl;
		aman = aman + 1;
	}
	return 0;
}
