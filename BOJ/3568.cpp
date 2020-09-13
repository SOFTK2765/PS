#include <bits/stdc++.h>

using namespace std;

int main()
{
	string first, tmp;
	cin >> first;
	while(cin >> tmp)
	{
		string res = tmp.substr(0, tmp.length()-1);
		reverse(res.begin(), res.end());
		int l = res.length(), ind = 0;
		for(int i=0;i<l;i++)
		{
			if(res[i]=='[') res[i] = ']';
			else if(res[i]==']') res[i] = '[';
			if(('a'<=res[i] && res[i]<='z') || ('A'<=res[i] && res[i]<='Z'))
			{
				ind = i;
				break;
			}
		}
		cout << first << res.substr(0, res.length()-l+ind) << " " << tmp.substr(0, l-ind) << ";" << endl;
 	}

	return 0;
}