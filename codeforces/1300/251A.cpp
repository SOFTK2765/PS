#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int n, d;
	scanf("%d %d", &n, &d);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int posl = 0, posr = 0;
	long long cnt = 0;
	while(posr<n)
	{
		if(posl==posr || (posr+1<n && a[posr+1]-a[posl]<=d))
		{
			posr++;
			if(a[posr]-a[posl]<=d)
			{
				long long tmp = posr-posl<0?0:posr-posl;
				cnt += tmp*(tmp-1)/2;
			}
		}
		else posl++;
	}
	printf("%lld", cnt);

	return 0;
}