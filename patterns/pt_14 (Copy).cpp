#include <iostream>

// Optional: includes standard namespace to avoid prefixing with std::
using namespace std;

int main() {
    
    for(int i = 1; i<=26; i++){
         char aman = 'A';
	    for(int j = 1; j<=i; j++){
          cout << aman;
	  aman = aman + 1;

	}
	cout << endl;
    }

    return 0;
}

