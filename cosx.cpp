#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
// cosx= 1 - x^2/2! + x^4/4! - x^6/6! + ...  
double F(double x,int n){
    int a;
    if(n%2==0){
        a = 1;
    }
    else{
        a = -1;
    }
    double temp = 1; 
    for(int i=1;i<=2*n;i++){
        temp = temp*x/i;
    }
    return a*temp;
}
int main(){
    double x,cos=1;
    int n = 1;
    cin >> x;
    while (abs(F(x,n)) > 0.00001)
    {
        cos += F(x,n);
        n++;
    }
    cout << fixed << setprecision(3) << cos ; 
    return 0;
}