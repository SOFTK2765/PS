#include <bits/stdc++.h>

using namespace std;

int cnt[27];

int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	for(int i=0;i<n;i++)
		cnt[s[i]-'a']++;
	for(int i=0;i<26;i++)
		while(cnt[i]--) printf("%c", i+'a');

	return 0;
}