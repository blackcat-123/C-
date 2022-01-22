#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int m,n,x;
    cin >> m >> n >> x;
    int a[m][n],b[n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            if(i==x-1){
                b[j]=a[i][j];
            }
        }
    }
    sort(b,b+n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==x-1){
                cout << b[j] <<" ";
            }
            else{
                cout << a[i][j] <<" ";
            }
        }
        cout <<'\n';
    }
    return 0;
}