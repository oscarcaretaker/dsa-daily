#include<iostream>
using namespace std;

class Rectangle{
	private :
		int len, br;
	public :
		void getData(){
			cout << endl << "Enter lenght and bredth " ;
			cin >> len >> br;
		}

		void setData(int l, int b){
			len =l;
			br =b;
		}

		void displayData(){
			cout << "length = " << len;
			cout << "breadth = " << br;
		}

		void areaPeri(){
				cout << " Area = " << (len*br) << endl;
				cout << "Perimeter =" << 2*(len + br) << endl;

		}
};

int main(){
	Rectangle aman;
	aman.setData(3,4);
	aman.displayData();
	aman.areaPeri();
	return 0;
}

