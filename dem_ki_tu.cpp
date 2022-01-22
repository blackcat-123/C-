#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin ,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
     
    int t, dem=0;
    cin >> t;
    char a[t];
    for(int i=0;i<t;i++){
        cin >> a[i];
        if(a[i]>='A' && a[i]<='Z')
            a[i]+=32;
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<s.length();j++){
            if(a[i]==s[j]) 
                dem++;
        }
        cout << dem << '\n';
        dem=0;
    }

    return 0;
}