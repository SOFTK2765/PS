#include <bits/stdc++.h>

using namespace std;

int a[100001], b[100001], c[100001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		b[i+1] = i;
		c[i] = i+1;
	}
	int cnt = 0;
	for(int i=0;i<n;i++)
		if(b[a[i]]!=i)
		{
			swap(b[a[i]], b[c[i]]);
			swap(c[i], c[b[c[i]]]);
			cnt++;
		}
	printf("%d", cnt);

	return 0;
}