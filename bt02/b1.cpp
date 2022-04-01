#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	if(a==1){
		cout << "no";
	}
	else{
		for(int i=2;i<a;i++){
			if(a%i==0){
				cout << "no";
				return 0;
			}
			
		}
		cout <<"yes";
		return 0;
	}
}
