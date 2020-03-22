#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	list<int> li;
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		li.push_back(tmp);
	}
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		for(list<int>::iterator it=li.begin();next(it, 1)!=li.end();it++)
		{
			if(*it==*(next(it, 1)))
			{
				int tmp = *it;
				it = li.erase(it);
				it = li.erase(it);
				it = li.insert(it, tmp+1);
				cnt++;
			}
		}
	}
	printf("%d", n-cnt);

	return 0;
}