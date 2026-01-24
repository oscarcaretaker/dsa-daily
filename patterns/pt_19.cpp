#include<iostream>
using namespace std;
int main(){
	
	int n = 9;
	for (int i = 1; i<=n; i++){
        	
		//
		for(int a = i; a<=n; a++){
			cout << "o";
		}
                for(int s = 0; s<(i-1)*2; s++){
			cout << " ";	
		}
		for(int b = i; b<=n; b++){
                        cout << "o";
		}
		cout << endl;
	}

	for(int i = 1; i<=5; i++){
		
		for(int a = 1; a<=i; a++){
                    cout << "o";
		}
		for(int s = 0; s<(n-i)*2;s++){
			cout << " ";
		}
		for(int a = 1; a<=i; a++){
			cout << "o";
		}
		cout << endl;
	}
	return 0;
}
