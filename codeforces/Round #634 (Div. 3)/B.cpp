#include <bits/stdc++.h>

using namespace std;

char res[2001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(res, 0, sizeof(res));
		int n, a, b;
		scanf(" %d %d %d", &n, &a, &b);
		for(int i=0;i<a;i++)
			res[i] = 'a'+(i%b);
		for(int i=a;i<n;i++)
			res[i] = res[i-a];
		printf("%s\n", res);
	}

	return 0;
}