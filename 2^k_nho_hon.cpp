#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long tich = 1;
    for(int i=1;i<=n;i++){
        tich *= i;
    }
    int dem=0;
    for(int i=1;i<tich;i*=2){
        if(tich%i==0)
        dem++;
    }

    cout<< dem -1;
    return 0;
}