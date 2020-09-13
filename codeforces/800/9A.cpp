#include <bits/stdc++.h>

using namespace std;

int main()
{
	int y, w;
	scanf("%d %d", &y, &w);
	int mx = max(y, w);
	if(mx==1) printf("1/1");
	else if(mx==2) printf("5/6");
	else if(mx==3) printf("2/3");
	else if(mx==4) printf("1/2");
	else if(mx==5) printf("1/3");
	else printf("1/6");

	return 0;
}