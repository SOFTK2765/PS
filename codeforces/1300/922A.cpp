#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int tmpx = y-1;
	if(tmpx<=0 && x!=0) printf("No");
	else if(tmpx>x) printf("No");
	else if((x-tmpx)%2!=0) printf("No");
	else printf("Yes");

	return 0;
}