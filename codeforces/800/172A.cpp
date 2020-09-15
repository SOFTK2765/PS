#include <bits/stdc++.h>

using namespace std;

char a[30001][21];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %s", a[i]);
	int l = strlen(a[0]);
	for(int i=0;i<l;i++)
	{
		char tmp = a[0][i];
		bool flag = false;
		for(int j=0;j<n;j++)
			if(tmp!=a[j][i])
			{
				flag = true;
				break;
			}
		if(flag)
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}