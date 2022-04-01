#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i<=j) cout << "*";
			else cout << " ";
		}
		for(int q=a-2;q>=0;q--){
			if(q>=i) cout << "*";
		
		}
		cout << endl;
	}
	return 0;
}
