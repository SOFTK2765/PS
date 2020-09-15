#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c1, c2, c3, c4, c5;
	scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
	int sum = c1+c2+c3+c4+c5;
	if(sum%5!=0 || sum==0) printf("-1");
	else printf("%d", (c1+c2+c3+c4+c5)/5);

	return 0;
}