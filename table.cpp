#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout << "Enter a number to print its table:\n";
    cin >> a;
    
    for(int i = 1; i < 11; i++){
    cout << a << " x " << i <<"= "<< (a*i)<< endl;
}


    return 0;
}
