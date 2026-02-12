#include<iostream>
#include<vector>
using namespace std;

vector<int> rev(int[] &array, int st, int end);


int main(){


	return 0;
}

vector<int> rev(int[] &array, int st, int end){

	for(int i = st; i <= end/2; i++){
		int temp = array[i];
		array[i] = array[end - i];
		array[end - i] =temp;
	}

	return array;	

}

