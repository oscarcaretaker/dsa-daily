#include <iostream>

// Optional: brings the std namespace into the current scope
using namespace std;

int main() 
{
    int n =5;
    for(int i = n; i>0; i--){
        for(int j = i; j <= n; j++){
        char aman = 'A';
	aman = (aman - 1) + j;
		cout << aman;
	}
	cout << endl;
    }
	

    return 0; // Indicates successful execution
}

