#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t, k, d;
	scanf("%d %d %d %d", &n, &t, &k, &d);
	int oven1 = -1, oven2 = -10000, cake = 0, time;
	for(time=0;;time++)
	{
		if(oven1==-1) oven1 = t-1;
		else if(oven1==0)
		{
			oven1 = t-1;
			cake += k;
		}
		else if(oven1>0) oven1--;
		if(oven2==0)
		{
			oven2 = t-1;
			cake += k;
		}
		else if(oven2>0) oven2--;
		else if(oven2==-10000) oven2 = -d;
		else if(oven2<-1) oven2++;
		else if(oven2==-1) oven2 = t-1;
		if(cake>=n) break;
	}
	if(n<=k) printf("NO");
	else if(((n-1)/k+1)*t<=time) printf("NO");
	else printf("YES");

	return 0;
}