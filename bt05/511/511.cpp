#include<iostream>

using namespace std;

int convert(int a){
    int sum =0, i=1, du;
    while(a!=0){
       du=a%2;
       sum=sum+du*i;
       a=a/2;
       i=i*10;

    }
    return sum;

}

int main(){
    int a;
    cin >> a;
    cout << convert(a);
    return 0;
}

