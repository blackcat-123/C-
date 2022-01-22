#include<iostream>
using namespace std;
int reverse(int n){
    int sum=0,temp;
    while(n>0){
        temp = n%10;
        sum = sum*10+temp;
        n = n/10;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==reverse(a[i]))
            cout << a[i] << " ";
    }
    return 0;
}