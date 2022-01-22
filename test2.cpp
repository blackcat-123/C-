#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	for (int i=0; i<s.length(); ++i) {
		if (s[i]>='A' && s[i]<='Z') s[i]+=32;
	}
	int n, dem=0;
	cin >> n;
	char x[100];
	for (int i=0; i<n; ++i) {
		cin >> x[i];
	}
	for (int i=0; i<n; ++i) {
		if (x[i]>='A' && x[i]<='Z') x[i]+=32;
	}
	for (int i=0; i<n; ++i) {
		for (int j=0; j<s.length(); ++j) {
			if (x[i]==s[j]) ++dem;
		}
		cout << dem << '\n';
		dem=0;
	}
	return 0; 
}