#include<iostream>
using namespace std;

int main(){

	int n = 40;
	for(int i = 1; i <= n; i++){
          if(i == 1 || i == n){
		for(int s = 1; s <= n; s++){
			cout << "*";
		}
		cout << endl;
	  }
	  else{
		cout << "*";
		for(int j = 1; j <= n-2; j++){
			cout << " ";	
		}
		cout << "*";
		  cout << endl;
	  }
	}

return 0;
}
