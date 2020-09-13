#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int l = s.length(), cntu = 0, cntl = 0;
	for(int i=0;i<l;i++)
		if('A'<=s[i] && s[i]<='Z') cntu++;
		else if('a'<=s[i] && s[i]<='z') cntl++;
	for(int i=0;i<l;i++)
	{
		if(cntu>cntl)
		{
			if('a'<=s[i] && s[i]<='z') printf("%c", s[i]-'a'+'A');
			else printf("%c", s[i]);
		}
		else
		{
			if('A'<=s[i] && s[i]<='Z') printf("%c", s[i]-'A'+'a');
			else printf("%c", s[i]);
		}
	}

	return 0;
}