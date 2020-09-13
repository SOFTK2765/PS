#include <bits/stdc++.h>

using namespace std;

int a[100001], b[100001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
		{
			scanf(" %d", &a[i]);
			b[i] = i+1;
		}
		int cnt = 0;
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a[i]==b[i+j])
				{
					for(int k=j;k>0;k--)
						swap(b[i+k-1], b[i+k]);
					cnt += j;
					break;
				}
				if(j==2) flag = true;
			}
			if(flag) break;
		}
		if(flag) printf("Too chaotic\n");
		else printf("%d\n", cnt);
	}

	return 0;
}