#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double x;
    cin >> x;
    int n=1,a=-1;
    double tu=x, mau=1, new_sin = x, old_sin = 0;
    while (abs(new_sin - old_sin) > 0.0001){
        tu = tu *x*x;
        mau = mau*(n+1)*(n+2);
        old_sin = new_sin;
        
        new_sin += a*(tu/mau);
        n = n+2;
        a = a*(-1);
    }

    cout << fixed << setprecision(4) << new_sin;
    return 0;
}