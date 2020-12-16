#include <bits/stdc++.h>

using namespace std;

bool check[27];

int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	for(int i=0;i<n;i++)
		if('a'<=s[i] && s[i]<='z') check[s[i]-'a'] = true;
		else if('A'<=s[i] && s[i]<='Z') check[s[i]-'A'] = true;
	for(int i=0;i<26;i++)
	{
		if(!check[i])
		{
			printf("NO");
			break;
		}
		if(i==25) printf("YES");
	}

	return 0;
}