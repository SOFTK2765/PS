#include <bits/stdc++.h>

using namespace std;

int a[1001];

void input(int *v)
{
	scanf(" %d", v);
	for(int i=0;i<*v;i++)
		scanf(" %d", &a[i]);
}

int findmx(int v)
{
	int mxn, mxcnt = 0;
	for(int i=1;i<=1000;i++)
	{
		int tmp = upper_bound(a, a+v+1, i)-lower_bound(a, a+v+1, i);
		if(mxcnt<tmp)
		{
			mxcnt = tmp;
			mxn = i;
		}
	}
	return mxn;
}

void solve(int v)
{
	sort(a, a+v);
	a[v] = 987654321;
	printf("%d\n", findmx(v));
}

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int v;
		input(&v);
		solve(v);
	}

	return 0;
}