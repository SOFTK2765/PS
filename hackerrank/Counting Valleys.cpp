#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int nl = 0, vcnt = 0;
	for(int i=0;i<n;i++)
		if(s[i]=='U')
		{
			nl++;
			if(nl==0) vcnt++;
		}
		else nl--;
	printf("%d", vcnt);

	return 0;
}