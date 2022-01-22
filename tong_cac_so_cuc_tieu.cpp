#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int tong=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    for (int i=1;i<=n;i++){
        if(i>=2 && i<=n-1){
            if(a[i]<a[i-1] && a[i+1]>a[i]){
                tong += a[i];
            }
        }
    }
    if(a[2]>a[1]){
        tong += a[1];
    }
    if(a[n-1]>a[n]){
        tong += a[n];
    }
    cout<<tong;
    return 0;
}
