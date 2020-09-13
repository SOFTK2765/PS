#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, x, y;
		scanf(" %d %d %d", &n, &x, &y);
		for(int i=n-1;i>=1;i--)
		{
			if((y-x)%i==0)
			{
				int tmp;
				bool flag = false;
				for(int j=0;j<n;j++)
				{
					tmp = j;
					if(y-((y-x)/i)*j<=0)
					{
						break;
					}
					printf("%d ", y-((y-x)/i)*j);
					if(j==n-1) flag = true;
				}
				if(tmp!=n-1 || !flag)
					for(int j=1;j<=n-tmp;j++)
						printf("%d ", y+((y-x)/i)*j);
				printf("\n");
				break;
			}
		}
	}

	return 0;
}