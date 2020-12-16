#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		int a, b, c;
		scanf(" %d %d %d", &a, &b, &c);
		if(a+b+c>=2) cnt++;
	}
	printf("%d", cnt);

	return 0;
}