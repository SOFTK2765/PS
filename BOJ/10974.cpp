#include <stdio.h>

int n, pos;
bool visit[9];
int res[9];

void f(int pos)
{
	if(pos==n)
	{
		for(int i=0;i<pos;i++)
			printf("%d ", res[i]);
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!visit[i])
		{
			visit[i]=true;
			res[pos]=i;
			f(pos+1);
			visit[i]=false;
		}
	}
}

int main()
{
	scanf("%d", &n);
	f(0);
	
	return 0;
}
