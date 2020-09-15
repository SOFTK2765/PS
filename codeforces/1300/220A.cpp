#include <bits/stdc++.h>

using namespace std;

int a[100001], b[100001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		b[i] = a[i];
	}
	sort(b, b+n);
	int cnt = 0;
	for(int i=0;i<n;i++)
		if(a[i]!=b[i]) cnt++;
	printf("%s", cnt<=2?"YES":"NO");

	return 0;
}