#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int min = abs(a[1] - a[0]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(abs(a[i+1]-a[i]< min))
            min = abs(a[i+1]-a[i]);
    }
    cout << min;
    return 0;
}