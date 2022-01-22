#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int i= n.length();
    int m = n[i-2]*10+n[i-1]; 
    if(m%2==0){
        if((m/2)%2==0)
            cout << 0;
        else
            cout << 1;
    }
    else{
        cout << 2;
    }
    return 0;
}