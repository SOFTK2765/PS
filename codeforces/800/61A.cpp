#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int l = a.length();
	for(int i=0;i<l;i++)
		printf("%d", (a[i]-'0')^(b[i]-'0'));

	return 0;
}