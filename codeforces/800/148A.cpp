#include <bits/stdc++.h>

using namespace std;

bool check[100001];

int main()
{
	int k, l, m, n, d;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	for(int i=k;i<=d;i+=k)
		check[i] = true;
	for(int i=l;i<=d;i+=l)
		check[i] = true;
	for(int i=m;i<=d;i+=m)
		check[i] = true;
	for(int i=n;i<=d;i+=n)
		check[i] = true;
	int cnt = 0;
	for(int i=1;i<=d;i++)
		if(check[i]) cnt++;
	printf("%d", cnt);

	return 0;
}