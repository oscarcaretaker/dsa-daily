#include<iostream>
#include<string>
using namespace std;

int main(){
	// hashin of alphabets
	int hash_array[26] = {0};
	string ex = "aabbccc";
	
	for(int n = 0; n<7;n++){
		hash_array[ex[n] - 'a']+=1;
	}


	// printing
	char x = 'a';
	for(int i = 0;i<26; i++){
		cout << x << " " << hash_array[i] << endl;
		x+=1;
	}

	return 0;
}
