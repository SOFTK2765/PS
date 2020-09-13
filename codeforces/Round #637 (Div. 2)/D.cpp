#include <bits/stdc++.h>

using namespace std;

char seg7[][8] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
char a[2001][8];
pair<bool, int> check[2001][10];
int res[2001];
bool flag;
int n, k;

void dfs(int pos, int nk)
{
	if(nk<0) return;
	if(nk==0)
	{
		for(int i=0;i<n;i++)
			printf("%d", res[i]);
		flag = true;
		return;
	}
	if(pos==n) return;
	for(int i=9;i>=0;i--)
		if(check[pos][i].first)
		{
			res[pos] = i;
			dfs(pos+1, nk-check[pos][i].second);
			if(flag) return;
		}
}

int main()
{
	memset(res, -1, sizeof(res));
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf(" %s", &a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)
		{
			int tmpcnt = 0;
			for(int l=0;l<8;l++)
				if(a[i][l]!=seg7[j][l]) tmpcnt++;
			check[i][j].first = true;
		}
		for(int j=0;j<10;j++)
			if(check[i][j].first)
				for(int l=0;l<8;l++)
					if(seg7[j][l]!=seg7[res[i]][l]) check[i][j].second++;
	}
	dfs(0, k);
	if(!flag) printf("-1");

	return 0;
}