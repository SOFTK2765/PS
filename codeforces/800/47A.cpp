#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	n *= 2;
	bool flag = false;
	for(int i=1;i*(i+1)<=n;i++)
		if(i*(i+1)==n) flag = true;
	printf("%s", flag?"YES":"NO");

	return 0;
}