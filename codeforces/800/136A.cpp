#include <bits/stdc++.h>

using namespace std;

int res[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		res[tmp-1] = i+1;
	}
	for(int i=0;i<n;i++)
		printf("%d ", res[i]);

	return 0;
}