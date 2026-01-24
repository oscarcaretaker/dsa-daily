#include<iostream>
using namespace std;
int main(){
   
	int size = 5;
	int arr[size] = {8,5,2,10,3};
        
	// insertion
	// take a element then place it on its place
	for(int j = 1; j < (size); j++){
             int key = arr[j];
	     for(int i = 0;i<j;i++){
                 if(arr[i]>key){
                   swap(arr[i],key);
		 }
	     }
	}
        for(int n = 0;n<size;n++){
            cout << arr[n] <<"   ";
	}


return 0;
}
