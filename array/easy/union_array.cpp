// FINDING UNION OF THE AARAY.
#include<iostream>
using namespace std;

int main(){
	// DECLARATION
	int n = 10;
	int m = 7;
	int a1[n] = {1,2,3,4,5,6,7,8,9,10};
	int a2[m] = {2,3,4,4,5,11,12};
	int s = 0;
	int cm[m+n];

	
	//common
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(a1[i] == a2[j] && a1[i] != cm[s-1]){
				cm[s] = a1[i];
				++s;
				break;
			}
		}
	}

	//distinct 1
	for(int i = 0; i<n; i++){
		int dis = 0;
		for(int j = 0; j<s;j++){
			if(a1[i] != cm[j]){
				++dis;
					}
		}
		if(dis == s){
			cm[s] = a1[i];
			++s;
		}
	}

	//distinct 2
	for(int i = 0; i<m; i++){
		int dis = 0;
		for(int j = 0; j<s; j++){
			if(a2[i] != cm[j]){
				++dis;
			}
		}
		if(dis == s){
			cm[s] = a2[i];
			++s;
	}
	}
	for(int i = 0; i<s; i++){
		cout << cm[i] << " ";
	}

	cout << endl;
	return 0;
}
