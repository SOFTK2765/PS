#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int cnt = 0;
	for(int i=0;i*i<=n;i++)
	{
		int tmp = n-(i*i);
		if(i+(tmp*tmp)==m) cnt++;
	}
	printf("%d", cnt);

	return 0;
}