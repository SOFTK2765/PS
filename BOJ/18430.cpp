#include <bits/stdc++.h>

using namespace std;

int a[6][6];
bool check[6][6];
int n, m;

int f(int ni, int nj)
{
	if(ni==n) return 0;
	if(nj==m) return f(ni+1, 0);
	int res = 0;
	if(ni+1<n && nj+1<m && !check[ni][nj] && !check[ni][nj+1] && !check[ni+1][nj+1])
	{
		check[ni][nj] = check[ni][nj+1] = check[ni+1][nj+1] = true;
		res = max(res, f(ni, nj+1)+a[ni][nj]+2*a[ni][nj+1]+a[ni+1][nj+1]);
		check[ni][nj] = check[ni][nj+1] = check[ni+1][nj+1] = false;
	}
	if(ni+1<n && nj+1<m && !check[ni][nj+1] && !check[ni+1][nj] && !check[ni+1][nj+1])
	{
		check[ni][nj+1] = check[ni+1][nj] = check[ni+1][nj+1] = true;
		res = max(res, f(ni, nj+1)+a[ni][nj+1]+a[ni+1][nj]+2*a[ni+1][nj+1]);
		check[ni][nj+1] = check[ni+1][nj] = check[ni+1][nj+1] = false;
	}
	if(ni+1<n && nj+1<m && !check[ni][nj] && !check[ni+1][nj] && !check[ni+1][nj+1])
	{
		check[ni][nj] = check[ni+1][nj] = check[ni+1][nj+1] = true;
		res = max(res, f(ni, nj+1)+a[ni][nj]+2*a[ni+1][nj]+a[ni+1][nj+1]);
		check[ni][nj] = check[ni+1][nj] = check[ni+1][nj+1] = false;
	}
	if(ni+1<n && nj+1<m && !check[ni][nj] && !check[ni][nj+1] && !check[ni+1][nj])
	{
		check[ni][nj] = check[ni][nj+1] = check[ni+1][nj] = true;
		res = max(res, f(ni, nj+1)+2*a[ni][nj]+a[ni][nj+1]+a[ni+1][nj]);
		check[ni][nj] = check[ni][nj+1] = check[ni+1][nj] = false;
	}
	return max(res, f(ni, nj+1));
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    printf("%d", f(0, 0));

    return 0;
}