#include<iostream>

using namespace std;

int main(){
    char  a[10][10];
    int n, m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                 a[i][j]='0';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(a[i][j]!='*'){
                    if(i==0 && j==0){
                        if(a[i+1][j+1]=='*') a[i][j]++;
                        if(a[i+1][j]=='*') a[i][j]++;
                        if(a[i][j+1]=='*') a[i][j]++;
                    }
                    else if(i==0){
                        if(a[i][j+1]=='*') a[i][j]++;
                        if(a[i+1][j]=='*') a[i][j]++;
                        if(a[i+1][j+1]=='*') a[i][j]++;
                        if(a[i][j-1]=='*') a[i][j]++;
                        if(a[i+1][j-1]=='*') a[i][j]++;
                    }
                    else if(j==0){
                        if(a[i+1][j]=='*') a[i][j]++;
                        if(a[i][j+1]=='*') a[i][j]++;
                        if(a[i+1][j+1]=='*') a[i][j]++;
                        if(a[i-1][j]=='*') a[i][j]++;
                        if(a[i-1][j+1]=='*') a[i][j]++;
                    }
                    else{
                        if(a[i-1][j-1]=='*') a[i][j]++;
                        if(a[i-1][j]=='*')a[i][j]++;
                        if(a[i-1][j+1]=='*')a[i][j]++;
                        if(a[i][j-1]=='*')a[i][j]++;
                        if(a[i][j+1]=='*')a[i][j]++;
                        if(a[i+1][j-1]=='*')a[i][j]++;
                        if(a[i+1][j]=='*')a[i][j]++;
                        if(a[i+1][j+1]=='*')a[i][j]++;
                    }
                }
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
}

