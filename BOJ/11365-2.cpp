#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	while(getline(cin, s))
	{
		if(s=="END") break;
		int l = s.length();
		for(int i=l-1;i>=0;i--)
			printf("%c", s[i]);
		printf("\n");
	}

	return 0;
}