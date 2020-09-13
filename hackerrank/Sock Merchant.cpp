#include <bits/stdc++.h>

using namespace std;

int cnt[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		cnt[tmp]++;
	}
	int sum = 0;
	for(int i=1;i<=100;i++)
		sum += cnt[i]/2;
	printf("%d", sum);

	return 0;
}