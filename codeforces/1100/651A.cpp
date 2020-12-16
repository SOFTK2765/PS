#include <bits/stdc++.h>

using namespace std;

int a[2];

int main()
{
	scanf("%d %d", &a[0], &a[1]);
	if(a[0]>a[1]) swap(a[0], a[1]);
	int charge = 0, discharge = 1, time = 0;
	while(a[0]>0 && a[1]>0)
	{
		if(a[discharge]<=2 && a[charge]!=1)
		{
			discharge = (discharge+1)%2;
			charge = (charge+1)%2;
		}
		a[charge]++;
		a[discharge] -= 2;
		if(a[discharge]<0) break;
		time++;
	}
	printf("%d", time);

	return 0;
}