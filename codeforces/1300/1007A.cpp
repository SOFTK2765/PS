#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	sort(a, a+n);
	int poss = 0, posb = 0, cnt = 0;
	while(a[poss]==a[posb] && posb<n) posb++;
	while(posb<n)
	{
		if(a[poss]<a[posb])
		{
			cnt++;
			poss++;
			posb++;
		}
		else posb++;
	}
	printf("%d", cnt);

	return 0;
}