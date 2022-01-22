#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int check(int n){
    int dem=0;
    if(n>=2){
        for (int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                dem++;
            }
        }
    }
    if (dem==1) 
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i=1;i<=n;i++){
        for( int j=i+1;j<=n;j++){
            if( check(a[i])==1 && check(a[j])==1 && a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<< a[i] << " ";
    }
    return 0;
}