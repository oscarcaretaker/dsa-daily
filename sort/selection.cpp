// selection sort 
// select the minimums ans swap
// a program to go in faang
    #include <iostream>
    using namespace std;
    int main() {
	// arr declaration
        int size = 20;
	int arr[size] = {21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,1};

	// selection sort
        for (int j = 0; j < size; j++){
        int var= arr[j];
	int var_i = 0;
        int temp = 0;

	for (int i = j; i<size ; i++){
		if(arr[i]<=var){
		   var = arr[i];
		   var_i = i;
		}
	}
        temp = arr[j];
	arr[j] = var;
        arr[var_i] = temp;
        }
        
	// print the values
	for(int k = 0 ; k < size; k++){
          cout << arr[k] << "," ;
	}
        return 0;
    }
