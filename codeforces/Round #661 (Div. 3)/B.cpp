#include <bits/stdc++.h>

using namespace std;

int a[51], b[51];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int mna = 1987654321, mnb = 1987654321;
		for(int i=0;i<n;i++)
		{
			scanf(" %d", &a[i]);
			mna = min(mna, a[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf(" %d", &b[i]);
			mnb = min(mnb, b[i]);
		}
		long long sum = 0;
		for(int i=0;i<n;i++)
			sum += max(a[i]-mna, b[i]-mnb);
		printf("%lld\n", sum);
	}

	return 0;
}