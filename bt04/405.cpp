#include<bits/stc++.h>

using namespace std;

int main(){
    int arr[10000];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==0) cout << arr[i] < " " << arr[j];
            break;
        }
    }
    return 0;
}

