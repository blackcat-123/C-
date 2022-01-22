#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,x;
    cin>>m>>n>>x;
    int a[m][n];
    int b[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];   
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j==x-1){
                b[i]=a[i][j];
            }   
        }
    }
    sort(b,b+m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j==x-1){
                cout << b[i] <<" ";
            }
            else{
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}