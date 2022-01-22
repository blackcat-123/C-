#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int check(int n){
	int a=sqrt(n);
	if(n-a*a==0) return 1;
	return 0;
}
int main(){
	
    int m,n;
    cin >> m >> n;
    int a[m][n];
    int b[100],x=0;
    int dem=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(check(a[i][j])==1){
                b[x] = a[i][j];
                x++;
            }
        }
    }
    sort(b,b+x);
    for(int i=0;i<x;i++){
        if(b[i]!=b[i+1])
        cout << b[i] << " ";
    }
    return 0;
}