#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int main()
{
	for(int i=0;i<6;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		cnt[tmp]++;
	}
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
	for(int i=1;i<10;i++)
	{
		if(cnt[i]==4) flag1 = true;
		else if(cnt[i]==2) flag2 = true;
		else if(cnt[i]==6) flag3 = true;
		else if(cnt[i]==5) flag4 = true;
	}
	if((flag1 && flag2) || flag3) printf("Elephant");
	else if(flag1 || flag4) printf("Bear");
	else printf("Alien");

	return 0;
}