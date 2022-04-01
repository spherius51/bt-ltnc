#include <iostream>
#include <cstdlib>
#include <ctime>
#include<algorithm>

using namespace std;

int main(){
    srand(time(0));
    int arr[100];
    int n, a, count=0;
    cin  >> n >> a;
    for(int i=0;i<n;i++){
        arr[i]=rand() % 100;
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==a) count++;
    }
    cout << count;

}

