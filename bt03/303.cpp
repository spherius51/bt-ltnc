#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int arr[10000];
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
	for(int i=0;i<a/2;i++){
		if(arr[i]!=arr[a-1-i]){
			cout << "No";
			return 0;
		}
	}
	cout << "yes";
}
