#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=n+1;;i++)
	{
		bool flag = false;
		for(int j=i-1;j>1;j--)
			if(i%j==0) flag = true;
		if(!flag)
		{
			if(i==m) printf("YES");
			else printf("NO");
			break;
		}
	}

	return 0;
}