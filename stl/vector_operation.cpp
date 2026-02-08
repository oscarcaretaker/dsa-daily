#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector <int> v {10,15,20,25};
	v.push_back(30);  		//pushes the element in the end
	
	v.front() << endl; 		// front element value
	v.end() << endl;
	v.at(2) << endl; 		// element at the 2nd position





	return 0;
}
