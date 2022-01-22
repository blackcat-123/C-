#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
    int second;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
    if(n<1 || a[0]==a[n-1]){
        cout << "NOT FOUND";
    }
    
    else{
        for(int i=n-2;i>=0;i--){
            if(a[i]< a[n-1]){
                second = a[i];
                break;
            }
        }
    }
    cout << second;
	return 0;
}