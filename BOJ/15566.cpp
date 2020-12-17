#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[16][5];
int b[16][3];
int c[101][4];
int check[16];
bool res;

void f(int pos)
{
	if(pos==n+1)
	{
		bool flag = false;
		for(int i=1;i<=m;i++)
		{
			if(a[check[c[i][1]]][c[i][3]]!=a[check[c[i][2]]][c[i][3]])
			{
				flag = true;
				break;
			}
		}
		if(!flag) res = true;
		return;
	}
	if(check[b[pos][1]]==-1)
	{
		check[b[pos][1]] = pos;
		f(pos+1);
		if(res) return; 
		check[b[pos][1]] = -1;
	}
	if(check[b[pos][2]]==-1)
	{
		check[b[pos][2]] = pos;
		f(pos+1);
		if(res) return;
		check[b[pos][2]] = -1;
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=4;j++)
			scanf(" %d", &a[i][j]);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=2;j++)
			scanf(" %d", &b[i][j]);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=3;j++)
			scanf(" %d", &c[i][j]);
	memset(check, -1, sizeof(check));
	f(1);
	if(res)
	{
		printf("YES\n");
		for(int i=1;i<=n;i++)
			printf("%d ", check[i]);
	}
	else printf("NO");

	return 0;
}