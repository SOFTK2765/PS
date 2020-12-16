#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int mn = 987654321, mni = 2;
	for(int i=2;i<=101;i++)
	{
		int sum = 0;
		for(int j=0;j<n;j++)
			sum += min({abs(i-a[j]-1), abs(i-a[j]), abs(i-a[j]+1)});
		if(mn>sum)
		{
			mn = sum;
			mni = i;
		}
	}
	printf("%d %d", mni, mn);

	return 0;
}