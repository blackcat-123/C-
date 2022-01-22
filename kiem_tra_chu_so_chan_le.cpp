/* Viet ham kiem tra mot so co toan chu so chan hoac le hay khong */
#include<iostream>
using namespace std;
int check(int n){
    int chan=0,le=0;
    while(n>0){
        if(n%2==0) {chan++;}
        else  {le++;}
        n = n/10;
    }
    if(chan ==0 || le==0){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        if(check(n)==1){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
    }
    return 0;
}