#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(x3 > min(x1,x2) && x3 < max(x1,x2) && y3 > min(x1,x2) && y3 < max(x1,x2)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
        
    }

}