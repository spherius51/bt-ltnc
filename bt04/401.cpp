#include <iostream>
#include <cstdlib>
#include <ctime>
#include<algorithm>

using namespace std;

int main(){
    srand(time(0));
    int arr[100];
    int n;
    cin  >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    /*for(int i=0;i<n;i++){
        arr[i]=rand() % 100;
    }*/
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }

}

