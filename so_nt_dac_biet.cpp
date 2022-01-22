#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
    int i = sqrt(n);
    if(n - i*i==0 && n>1)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    cin >> n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(check(i)==1)
            count++;
    }
    cout << count;
    return 0;
}