#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	sort(a, a+n);
	int mn = a[0], res = -987654321;
	for(int i=0;i<n;i++)
		if(a[i]!=mn)
		{
			res = a[i];
			break;
		}
	if(res!=-987654321) printf("%d", res);
	else printf("NO");

	return 0;
}