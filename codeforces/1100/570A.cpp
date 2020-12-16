#include <bits/stdc++.h>

using namespace std;

int a[101][101];
int cnt[101];

int main()
{
	int n, m;
	scanf("%d %d", &m, &n);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf(" %d", &a[i][j]);
	for(int i=0;i<n;i++)
	{
		int mx = a[i][0], mxj = 0;
		for(int j=1;j<m;j++)
			if(mx<a[i][j])
			{
				mx = a[i][j];
				mxj = j;
			}
		cnt[mxj+1]++;
	}
	int mx = cnt[0], mxi = 0;
	for(int i=0;i<101;i++)
		if(mx<cnt[i])
		{
			mx = cnt[i];
			mxi = i;
		}
	printf("%d", mxi);

	return 0;
}