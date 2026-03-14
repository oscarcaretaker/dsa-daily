#include<iostream>
using namespace std;

int main(){
 
	int num;
	cin >> num;
	int ans = 1;
	for(int i = 2; i<=num; i++){
		if(num%i == 0){
                    ans = ans + i;
		}
	}
	if(ans == 1+num){
		cout << "Is Prime" << endl;
	}
	else{
		cout << "Not a Prime" << endl;
	}
	return 0;
}
