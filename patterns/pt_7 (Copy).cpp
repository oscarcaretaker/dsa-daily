#include<iostream>
using namespace std;

int main(){

int n = 10;
for(int i = n-1; i>=0; i--){
   for(int a = i; a>0; a--){
     cout << "_";
   }
   for(int b = ((n*2)-1)-(2*i); b>0; b--){
     cout << "*";
   }
   for(int c = i; c>0; c--){
    cout << "_";
   }
  cout << "\n";
}
return 0;
}
