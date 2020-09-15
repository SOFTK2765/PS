#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	bool flag = false;
	int cnt = 0;
	for(int i=0;i<l;i++)
		if(s[i]=='4' || s[i]=='7') cnt++;
	printf("%s", (cnt==4 || cnt==7)?"YES":"NO");

	return 0;
}