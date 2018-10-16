#include <stdio.h>
#include <math.h>

int main()
{
	int t, x1, x2, y1, y2, n, cx, cy, r, count, result;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		result=0;
		scanf("%d", &n);
		for(int j=0;j<n;j++)
		{
			count=0;
			scanf("%d %d %d", &cx, &cy, &r);
			if(pow((x1-cx), 2)+pow((y1-cy), 2)<pow(r, 2)) count++;
			if(pow((x2-cx), 2)+pow((y2-cy), 2)<pow(r, 2)) count++;
			if(count==1) result++;
		}
		printf("%d\n", result);
	}
	
	return 0;
}
