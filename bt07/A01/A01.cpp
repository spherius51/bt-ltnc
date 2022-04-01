#include<iostream>

using namespace std;

int f(int arr[]){

    int i=0;
    while(arr[i]!='\0'){
        cout << arr[i];
        i++;
    }
    return i;

}
int main(){
    int arr[]={1,2,3,4,5,6};
    cout << f(arr);
    int a=sizeof(arr)/sizeof(int);
    cout << a << endl;


}
