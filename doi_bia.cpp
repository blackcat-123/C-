#include<iostream>
#include<algorithm>
using namespace std;
// sum:so chai bia, vo:so vo bia, du:so vo chai du, 
int main(){
	int sum;
    cin >> sum;
    int vo = sum;
    int du=0;
    while(vo >= 10){
        du = sum%10;
        sum += (vo-du)/10*3;
        vo = (vo-du)/10*3 + du;
    }
    cout << sum;
	return 0;
}