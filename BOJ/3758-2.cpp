#include <bits/stdc++.h>

using namespace std;

int a[101][101];
tuple<int, int, int, int> b[101];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k, t, m;
		scanf(" %d %d %d %d", &n, &k, &t, &m);
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for(int i=0;i<m;i++)
		{
			int tmp1, tmp2, tmp3;
			scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
			if(a[tmp1][tmp2]<tmp3) a[tmp1][tmp2] = tmp3;
			get<1>(b[tmp1])++;
			get<2>(b[tmp1]) = i;
		}
		for(int i=1;i<=n;i++)
		{
			get<3>(b[i]) = i;
			for(int j=1;j<=k;j++)
				get<0>(b[i]) -= a[i][j];
		}
		sort(b+1, b+n+1);
		for(int i=1;i<=n;i++)
			if(get<3>(b[i])==t)
			{
				printf("%d\n", i);
				break;
			}
	}

	return 0;
}