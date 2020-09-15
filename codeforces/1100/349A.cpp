#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int cnt25 = 0, cnt50 = 0, cnt100 = 0;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		if(tmp==25) cnt25++;
		else if(tmp==50)
		{
			cnt25--;
			cnt50++;
		}
		else
		{
			if(cnt50>0)
			{
				cnt50--;
				cnt25--;
			}
			else cnt25 -= 3;
		}
		if(cnt25<0)
		{
			flag = true;
			break;
		}
	}
	printf("%s", flag?"NO":"YES");

	return 0;
}