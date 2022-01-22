#include<iostream>
using namespace std;
int check(int n){
    int dem=0;
    while(n>0){
        if(n%5==0 && n%2==1){
            dem++;
        }
        n = n/10;
    }
    return dem;
} // tim so chu so 5 xuat hien tu m den n.
int main(){
    int m,n;
    cin >> m >> n;
    int count=0;
    for(int i=m;i<=n;i++){
        count += check(i);
    }
    cout << count;
    return 0;
}