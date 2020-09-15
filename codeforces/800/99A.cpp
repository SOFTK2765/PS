#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	for(int i=0;i<l;i++)
		if(s[i]=='.')
		{
			if(s[i-1]!='9')
			{
				if(s[i+1]>='5')
				{
					s[i-1]++;
					cout << s.substr(0, i);
				}
				else cout << s.substr(0, i);
				break;
			}
			else
			{
				cout << "GOTO Vasilisa.";
				break;
			}
		}

	return 0;
}