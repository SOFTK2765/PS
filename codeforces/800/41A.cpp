#include <bits/stdc++.h>

using namespace std;

char a[101], b[101];

int main()
{
	scanf("%s %s", a, b);
	int l = strlen(a);
	bool flag = false;
	for(int i=0;i<l;i++)
		if(a[i]!=b[l-1-i]) flag = true;
	printf("%s", flag?"NO":"YES");

	return 0;
}