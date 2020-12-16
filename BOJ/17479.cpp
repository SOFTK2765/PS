#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	map<string, int> amenu, bmenu;
	set<string> cmenu;
	for(int i=0;i<a;i++)
	{
		string tmp1;
		int tmp2;
		cin >> tmp1 >> tmp2;
		amenu[tmp1] = tmp2;
	}
	for(int i=0;i<b;i++)
	{
		string tmp1;
		int tmp2;
		cin >> tmp1 >> tmp2;
		bmenu[tmp1] = tmp2;
	}
	for(int i=0;i<c;i++)
	{
		string tmp1;
		cin >> tmp1;
		cmenu.insert(tmp1);
	}
	int n;
	scanf("%d", &n);
	long long asum = 0, bsum = 0;
	int ccnt = 0;
	for(int i=0;i<n;i++)
	{
		string tmp;
		cin >> tmp;
		if(amenu[tmp]) asum += amenu[tmp];
		else if(bmenu[tmp]) bsum += bmenu[tmp];
		else if(cmenu.find(tmp)!=cmenu.end()) ccnt++;
	}
	bool flag = true;
	if(asum<20000 && (bsum>0 || ccnt>0)) flag = false;
	else if(asum+bsum<50000 && ccnt>0) flag = false;
	else if(ccnt>1) flag = false;
	printf("%s", flag?"Okay":"No");

	return 0;
}