#include <bits/stdc++.h>

using namespace std;

char a[101][101];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		scanf(" %s", a[i]);
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		char tmp = a[i][0];
		for(int j=0;j<m;j++)
			if(a[i][j]!=tmp)
			{
				flag = true;
				break;
			}
		if(flag) break;
	}
	for(int i=0;i<n-1;i++)
		if(a[i][0]==a[i+1][0]) flag = true;
	printf("%s", flag?"NO":"YES");

	return 0;
}