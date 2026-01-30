#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int last_num = 0, num;
	cin >> num;
	string ans = "";
	cout << num << endl;
	while(num>0){
		last_num = (num%2);
		ans = to_string(last_num) + ans;
		num = num/2;
	}
	cout << stoi(ans) << endl;
	
	return 0;
}
