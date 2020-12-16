#include <bits/stdc++.h>

using namespace std;

int a[151];
bool visit[151];

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int pos = 0, cnt = 0, res = -1;
	while(!visit[pos])
	{
		if(pos==k)
		{
			res = cnt;
			break;
		}
		visit[pos] = true;
		pos = a[pos];
		cnt++;
	}
	printf("%d", res);

	return 0;
}