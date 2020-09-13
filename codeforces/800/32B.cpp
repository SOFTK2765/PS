#include <bits/stdc++.h>

using namespace std;

char a[201];

int main()
{
	scanf("%s", a);
	int l = strlen(a);
	for(int i=0;i<l;i++)
	{
		if(a[i]=='.') printf("0");
		else
		{
			if(a[++i]=='.') printf("1");
			else printf("2");
		}
	}

	return 0;
}