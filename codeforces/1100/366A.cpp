#include <bits/stdc++.h>

using namespace std;

int a[5], b[5], c[5], d[5];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<4;i++)
		scanf(" %d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	bool flag = false;
	for(int i=0;i<4;i++)
		if(min(a[i], b[i])+min(c[i], d[i])<=n)
		{
			printf("%d %d %d", i+1, min(a[i], b[i]), n-min(a[i], b[i]));
			flag = true;
			break;
		}
	if(!flag) printf("-1");

	return 0;
}