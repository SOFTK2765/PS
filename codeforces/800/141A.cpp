#include <bits/stdc++.h>

using namespace std;

int cnt[27];

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	for(int i=0;i<l;i++)
		cnt[s[i]-'A']++;
	cin >> s;
	l = s.length();
	for(int i=0;i<l;i++)
		cnt[s[i]-'A']++;
	cin >> s;
	l = s.length();
	bool flag = false;
	for(int i=0;i<l;i++)
		if(--cnt[s[i]-'A']<0) flag = true;
	for(int i=0;i<26;i++)
		if(cnt[i]!=0) flag = true;
	printf("%s", flag?"NO":"YES");

	return 0;
}