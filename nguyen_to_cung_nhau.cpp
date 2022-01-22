#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int check(int a,int b){
    int dem=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
            dem++;
    }
    if(dem==1)
        return 1;
    else
        return 0;
}
int main(){
    int m,n;
    cin >> n >> m;
    int dem=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(check(i,j)==1)
            dem++;
        
        }
    }
    cout << dem;
    return 0;
}