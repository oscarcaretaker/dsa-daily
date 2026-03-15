#include<iostream>
using namespace std;

int main(){

int n =5;
// top pyramid
for(int i = n-1; i>=0; i--){
	//1st
	for(int sp = 0; sp < i; sp++){
		cout << " ";
	}
	// 2nd
	for(int st = 0; st < ((n*2)-1) -(2*i); st++){
                cout << "*";
	}
	//3rd
	for(int sp = 0; sp<i; sp++){
	 cout << " ";
	}
	cout << "\n";
}
// bottom pyramid
for(int i = 0; i < n-1; i++){
           //1st
	   for(int sp = 0;sp<i; sp++){
	   cout << " ";
	   }
           // 2nd
	   for(int st = ((n*2)-1) - (i*2); st>0; st--){
              cout << "*";
		}
	   //3rd
	   for(int sp = 0; sp<i; sp++){
               cout << " ";
	   }
cout << "\n";
}
return 0;
}
