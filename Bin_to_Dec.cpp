#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string n;
        cin >> n;
        long long dec=0,mu=1;
        int m=n.length();
        for(int i=m-1;i>=0;i--){
            dec += int(n[i]-48)*mu;
            mu = mu*2;
        }
    cout << dec << endl;
    }
    return 0;
}
// chuyển kí tự sang số ta trừ đi 48.