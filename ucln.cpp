#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int UCLN(int a,int b){
    int bien=0;
    
    for(int i=min(abs(a),abs(b));i>=1;i--){
        if(a%i==0 && b%i==0){
            bien = i;
            break;
        }
    }
    
    return bien;
}
int main(){
    int a,b;
    cin >> a >> b;
    int c = UCLN(abs(a),abs(b));
    if(b == 0){
        cout << "INVALID";
    }
    else if(a % b == 0){
        cout << a/b;
    }
    else{
        if((a>0 && b<0)||(a<0 && b>0)){
            cout << -abs(a)/c<<" "<<abs(b)/c;
        }
        else{
            cout << abs(a)/c<<" "<<abs(b)/c;
        }
    }
    return 0;
}