#include <bits/stdc++.h>

using namespace std;

int cnt[101];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(cnt, 0, sizeof(cnt));
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
		{
			int tmp;
			scanf(" %d", &tmp);
			cnt[tmp]++;
		}
		int res = 0;
		for(int i=2;i<=n+n;i++)
		{
			int tmpcnt = 0;
			for(int j=1;j<=i/2;j++)
			{
				if(j==i-j) tmpcnt += cnt[j]/2;
				else tmpcnt += min(cnt[j], cnt[i-j]);
			}
			res = max(res, tmpcnt);
		}
		printf("%d\n", res);
	}

	return 0;
}