#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	bool flag1 = false, flag2 = false, flag3 = false;
	for(int i=0;i<l;i++)
	{
		if('a'<=s[i] && s[i]<='z') flag1 = true;
		else if('A'<=s[i] && s[i]<='Z') flag2 = true;
		else if('0'<=s[i] && s[i]<='9') flag3 = true;
	}
	printf("%s", (flag1 && flag2 && flag3 && (l>=5))?"Correct":"Too weak");

	return 0;
}