#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int check(int n){
    int dem = 0;
    if(n<=1){
        return 0;
    }
    else{
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
            dem++;
        }
        if(dem==1)
            return 1;
        else
            return 0;
    }

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1] && check(a[i])==1){
            cout << a[i] << " ";
        }
    }
    return 0;
}