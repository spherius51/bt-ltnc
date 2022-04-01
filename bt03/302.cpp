#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int a=s.length();
	for(int i=0;i<a/2;i++){
		if(s[i]!=s[a-1-i]){
			cout << "No";
			return 0;
		}
	}
	cout << "yes";
}
