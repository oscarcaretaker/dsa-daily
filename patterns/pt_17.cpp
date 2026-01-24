#include <iostream>

using namespace std;

int main() 
{
    // decider
    int n = 26;
    for(int i = n-1; i>=0; i--){
		
	    	for(int sp = i-1; sp>=0; sp--){
		   cout << " ";
		}
		char aman = 'A';
		for(int al = n - i; al>0; al--){
                   cout << aman;
		   aman = aman + 1;
		}
                aman = 'A';
		for(int al = n-(i+1); al>0; al--){
                        aman = aman - 1 + al;
			cout << aman;
			aman = 'A';
 
		}

		for(int sp = i; sp>0 ;sp--){
                    cout << " ";
		}
      cout << endl;
    }
    return 0;
}

