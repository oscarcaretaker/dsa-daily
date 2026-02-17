#include<iostream>
using namespace std;

int main(){
	
	int num[] = {10,20,30,40,50};
	int *ptr;
	ptr = num;
	
	for(int i = 0; i<5; i++){
		cout << num[i] <<" -> "<<ptr << endl;
		ptr++;
	}

	return 0;
}
