#include<iostream>

using namespace std;

bool check(int a){
    for(int i=2; i<a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}


int main(){
    int a;
    cin >> a;
    for(int i=2; i<=a;i++){
        if(check(i)){
          cout << i << " ";
        }
    }
    return 0;
}
