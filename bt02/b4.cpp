#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	for(int i=a-1;i>=0;i--){
		for(int j=a-1;j>=1;j--){
			if(i>=j) cout << "*";
			else cout << " ";
		}
		for(int q=a-1;q>=0;q--){
			if(q<=i) cout << "*";
		
		}
		cout << endl;
	}
	return 0;
}
