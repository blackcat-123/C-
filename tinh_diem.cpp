#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int diem=0,dem=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='C'){
            dem++;
            diem += dem;
        }
        else if(s[i]=='N'){
            dem=0;
        }
    }
    cout << diem;
    return 0;
}