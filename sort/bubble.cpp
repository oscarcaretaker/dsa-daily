//  BUBBLE SORT
//  TAKE THE BIGGEST PUT IN last
#include <iostream>
using namespace std;

int main(){
        int size = 20;
	int arr[size] = {20,10,23,2,2,3,4,2,4,5,2,2,3,4,5,3,2,5,4,5};
	int chk = 0;
	for(int j = (size-1); j>=0; j--){
            for(int i = 0; i <= j - 1; i++){
                 if(arr[i]>arr[i+1]){
                   swap(arr[i],arr[i+1]);
		 }
	    }
	}
        int n;
	for(n = 0; n<size; n++){
          cout << arr[n] << ",";
	}
 return 0;
}
