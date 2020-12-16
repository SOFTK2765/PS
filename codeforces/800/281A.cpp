#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	if('a'<=s[0] && s[0]<='z') s[0] = s[0]-'a'+'A';
	cout << s;

	return 0;
}