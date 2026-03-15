#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER : ";
    cin >> n;
    for(int i = 1; i<=n; i++){
      
	    // main logic
             for(int num = 1; num <=i; num++){
	        cout << num;
	     }
	     for(int sp = (n-i)*2; sp>0; sp--){
                cout << " ";
	     }
	     for(int num = n-(n-i) ;num>=1;num--){
                cout << num;
	     }
      cout << endl;
    }
    return 0;
}

