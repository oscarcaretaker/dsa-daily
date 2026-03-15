#include<iostream>
using namespace std;

int main(){
int n = 5;
for(int i = 0; i<=4; i++){
        // space loop
       for(int sp = 0; sp<i; sp++){
         cout << " ";
       }
       // star loop
       for(int star = ((n*2)-1) - (2*i) ; star>=1; star--){
         cout << "*";
       }
       // 3rd loop same as first
       for(int sp =0;sp<i;sp++){
          cout << " ";
	}

	cout << "\n";
}

return 0;
}
