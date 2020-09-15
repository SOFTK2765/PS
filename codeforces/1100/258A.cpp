#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	bool flag = false;
	for(int i=0;i<l-1;i++)
	{
		if(s[i]=='0')
		{
			cout << s.substr(i+1, l-i-1);
			flag = true;
			break;
		}
		else cout << s[i];
	}
	if(l==1) cout << s;

	return 0;
}