#include <bits/stdc++.h>

using namespace std;

int cnt[27];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	string s;
	cin >> s;
	int a, c, g, t;
	scanf("%d %d %d %d", &a, &c, &g, &t);
	int rescnt = 0;
	for(int i=0;i<m;i++)
		cnt[s[i]-'A']++;
	if(cnt['A'-'A']>=a && cnt['C'-'A']>=c && cnt['G'-'A']>=g && cnt['T'-'A']>=t) rescnt++;
	for(int i=m;i<n;i++)
	{
		cnt[s[i-m]-'A']--;
		cnt[s[i]-'A']++;
		if(cnt['A'-'A']>=a && cnt['C'-'A']>=c && cnt['G'-'A']>=g && cnt['T'-'A']>=t) rescnt++;
	}
	printf("%d", rescnt);

	return 0;
}