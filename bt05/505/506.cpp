#include<iostream>

using namespace std;

int gcd(int a, int b){
    int temp;
    while(a%b!=0){
        temp = a%b;
        a=b;
        b=temp;
    }
    return temp;

}


int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}


