#include <stdio.h>
#include <algorithm>

using namespace std;

int a[200001];
int n, c;

int binsearch(int num)
{
	int lo=1, hi=200000;
	while(lo<=hi)
	{
		int m=(lo+hi)/2, count=1, min=200000, s=a[0];
		for(int i=0;i<n;i++)
		{
			if(s+m<=a[i])
			{
				if(a[i]-s<min) min=a[i]-s;
				s=a[i];
				count++;
			}
		}
		if(count==num)
		{
			int save;
			for(int i=0;;i++)
			{
				count=1, min=200000, s=a[0];
				for(int j=0;j<n;j++)
				{
					if(s+m+i<=a[j])
					{
						if(a[j]-s<min) min=a[j]-s;
						s=a[j];
						count++;
					}
				}
				if(count<num) return save;
				save=min;
			}
		}
		else if(count<num)
			hi=m-1;
		else
			lo=m+1;
	}
	int min=200000, s=a[0];
	for(int i=0;i<n;i++)
	{
		if(s+lo-1<=a[i])
		{
			if(a[i]-s<min) min=a[i]-s;
			s=a[i];
		}
	}
	return min;
}

int main()
{
	scanf("%d %d", &n, &c);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	sort(a, a+n);
	printf("%d", binsearch(c));
	
	return 0;
}
