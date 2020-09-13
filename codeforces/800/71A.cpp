#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		string tmp;
		cin >> tmp;
		int l = tmp.length();
		if(l<=10) cout << tmp << '\n';
		else printf("%c%d%c\n", tmp[0], l-2, tmp[l-1]);
	}

	return 0;
}