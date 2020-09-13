#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	int al = a.length(), bl = b.length(), cl = c.length(), cnt = 0;
	string res = "YES";
	for(int i=0;i<al;i++)
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') cnt++;
	if(cnt!=5) res = "NO";
	cnt = 0;
	for(int i=0;i<bl;i++)
		if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u') cnt++;
	if(cnt!=7) res = "NO";
	cnt = 0;
	for(int i=0;i<cl;i++)
		if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u') cnt++;
	if(cnt!=5) res = "NO";
	cout << res;

	return 0;
}