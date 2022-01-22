// Nén số đến khi nào thành số có 1 chữ số, vd:93 => 9+3=12 => 1+2 =3.
#include<iostream>
using namespace std;
int ptit(long long n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    long long n;
    cin >> n;
    int tong=ptit(n);
    while(tong>=10){
        tong = ptit(tong);
    }
    cout << tong;
    return 0;
}