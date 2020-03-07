#include <bits/stdc++.h>

using namespace std;

int a[3000001];
int check[3001];

int main()
{
	int n, d, k, c;
	cin >> n >> d >> k >> c;
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int cnt = 0;
	for(int i=0;i<k;i++)
	{
		if(check[a[i]]==0) cnt++;
		check[a[i]]++;
	}
	int mx = 0;
	for(int i=0;i<n;i++)
	{
		check[a[i]]--;
		if(check[a[i]]==0) cnt--;
		if(check[a[(i+k)%n]]==0) cnt++;
		check[a[(i+k)%n]]++;
		if(check[c]==0) mx = max(mx, cnt+1);
		else mx = max(mx, cnt);
	}
	cout << mx;

	return 0;
}