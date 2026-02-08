// Practicing Containers -> VECTORS
#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector <int> v1; 			// vector named v1 with int type data.
	vector <int> :: iterator itr1;
	for(int i = 0; i<=5; i++){
		v1.push_back(5*i);		// push_back
	}
	cout << "Vector v1 :" << endl;
	for(itr1 = v1.begin(); itr1 != v1.end(); ++itr1)
		cout << *itr1 << endl;

	vector <int> v2 {10,20,30,40,50,60};
	cout << "Vector v2 :" << endl;
	for(auto itr2 = v2.begin(); itr2 != v2.end(); ++itr2)
		cout << *itr2 << endl;

	vector <int> v3 {10,20,30,40,50};
	cout << "Vector v3 :" << endl;
	for(auto num : v3)
		cout << num << endl;


	return 0;
}

