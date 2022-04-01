#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[100];
    int n, a, count=0;
    cin >> n >> a;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==a) count++;
    }
    cout << count;
}
