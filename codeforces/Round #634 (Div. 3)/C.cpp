#include <bits/stdc++.h>

using namespace std;

int a[200001], cnt[200001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=1;i<=n;i++)
			cnt[i] = 0;
		for(int i=0;i<n;i++)
		{
			scanf(" %d", &a[i]);
			cnt[a[i]]++;
		}
		int mx = 0, ncnt = 0;
		for(int i=1;i<=n;i++)
			if(cnt[i])
			{
				mx = max(mx, cnt[i]);
				ncnt++;
			}
		if(mx>ncnt) printf("%d\n", ncnt);
		else if(mx==ncnt) printf("%d\n", mx-1);
		else printf("%d\n", mx);
	}

	return 0;
}