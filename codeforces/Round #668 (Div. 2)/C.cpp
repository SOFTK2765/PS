#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k;
		scanf(" %d %d", &n, &k);
		string s;
		cin >> s;
		int cnt0 = 0, cnt1 = 0, cntj = 0;
		bool success = true;
		for(int i=0;i<n-k;i++)
			if(s[i]!='?' && s[i+k]!='?')
			{
				if(s[i]!=s[i+k])
				{
					success = false;
					break;
				}
			}
			else if(s[i]!='?' && s[i+k]=='?')
			{
				s[i+k] = s[i];
			}
			else if(s[i]=='?' && s[i+k]!='?')
			{
				s[i] = s[i+k];
			}
		if(!success)
		{
			printf("NO\n");
			continue;
		}
		for(int i=0;i<k;i++)
			if(s[i]=='0') cnt0++;
			else if(s[i]=='1') cnt1++;
			else cntj++;
		for(int i=k;;i++)
		{
			if(abs(cnt0-cnt1)==0) success = true;
			else if(abs(cnt0-cnt1)<=cntj) success = true;
			else success = false;
			if(!success) break;
			if(i>=n) break;
			if(s[i-k]=='0') cnt0--;
			else if(s[i-k]=='1') cnt1--;
			else cntj--;
			if(s[i]=='0') cnt0++;
			else if(s[i]=='1') cnt1++;
			else cntj++;
		}
		printf("%s\n", success?"YES":"NO");
	}

	return 0;
}