/*sap xep so am giam dan, khong thay doi vi trí số dương 
sắp xếp số dương tăng dần không thay đôi vị trí số âm */
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<0 && a[j]<0 && a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>0 && a[j]>0 && a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}