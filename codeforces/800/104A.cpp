#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if(n-10>0)
	{
		if(n==20) printf("15");
		else if(n>21) printf("0");
		else printf("4");
	}
	else printf("0");

	return 0;
}