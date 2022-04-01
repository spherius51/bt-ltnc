#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	int arr[10000];
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(arr[i]==arr[j]){
				cout << "yes";
				return 0;
			}
		}
	}
	cout << "no";
	return 0;
}
