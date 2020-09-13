#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, a, b, c, d;
		scanf(" %d %d %d %d %d", &n, &a, &b, &c, &d);
		bool flag = false;
		for(int i=a-b;i<=a+b;i++)
			if (c-d<=n*i && n*i<=c+d)
			{
				flag = true;
				break;
			}
		printf("%s\n", flag?"Yes":"No");
	}

	return 0;
}