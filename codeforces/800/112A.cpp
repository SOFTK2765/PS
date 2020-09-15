#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int l = a.length();
	for(int i=0;i<l;i++)
	{
		if('A'<=a[i] && a[i]<='Z') a[i] = a[i]-'A'+'a';
		if('A'<=b[i] && b[i]<='Z') b[i] = b[i]-'A'+'a';
	}
	printf("%d", a<b?-1:a>b?1:0);

	return 0;
}