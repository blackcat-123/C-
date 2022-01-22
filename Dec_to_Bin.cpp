#include<iostream>
using namespace std;
int a[100];
int Dec_to_Bin(long long n){
    int m=0;
    while(n>0){
       
        a[m]= n%2;
        n = n/2;
        m++;
    }
    for(int i=m-1;i>=0;i--){
        cout << a[i];
    }
   	// in ra số nhị phân dùng mảng số nguyên

}
int main(){
    int t;
    cin >> t;
    long long b[t];
    for(int i=0;i<t;i++){
        cin >> b[i];
    }
    for(int i=0;i<t;i++){
        Dec_to_Bin(b[i]);
        cout << endl;
    }
    return 0;
}