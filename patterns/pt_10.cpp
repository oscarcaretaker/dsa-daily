#include<iostream>
using namespace std;
int main (){
int n;
cout << "Enter a name : ";
cin >> n;


for(int i = 1; i<=n; i++){
for(int s = 1; s<=i; s++){
  cout << "*";
}
  cout << "\n";
}

for(int i = (n-1); i>0; i--){
for(int s = i; s>0; s--){
cout << "*";
}
cout << "\n";
}
return 0;
}
