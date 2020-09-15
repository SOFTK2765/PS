#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int mn = a[0], mx = a[0], cnt = 0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<mn)
		{
			mn = a[i];
			cnt++;
		}
		if(a[i]>mx)
		{
			mx = a[i];
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}