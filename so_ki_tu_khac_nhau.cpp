#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[256]={0};// gán giá trị 0 cho các phần tử trong mảng 
    int dem=0;
    for(int i=0;i<s.length();i++){
        a[s[i]]=1;

    }
    for(int i=0;i<256;i++){ // có 256 kí tự 
        if(a[i]==1)
         dem++;
    }
    cout << dem;
    return 0;
}