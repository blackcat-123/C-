#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >>b;
    int ucln;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ucln = i;
        }
    }
    cout << a*b/ucln;
    return 0;
}