#include <iostream>
#include <math.h>

using namespace std;
void DectoBin(long int n){
    if (n!=0){
        DectoBin(n/2);
        cout<<n%2;
    }
}
int main()
{
    long long T;
    cin>>T;
    long int arr[T];
    for (long int i=0; i<T; i++){
       cin>>arr[i];
    }
    for (long int i=0; i<T; i++){
       DectoBin(arr[i]);
       cout<<endl;
    }
    return 0;
}