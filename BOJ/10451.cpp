#include <stdio.h>

int a[1001];
bool visit[1001];

void f(int i)
{
	if(visit[i]) return;
	visit[i]=true;
	f(a[i]);
}

int main()
{
	int t, n, count;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<1001;j++)
			visit[j]=false;
		scanf("%d", &n);
		for(int j=1;j<=n;j++)
			scanf("%d", &a[j]);
		count=0;
		for(int j=1;j<=n;j++)
		{
			if(!visit[j])
			{
				f(j);
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}
