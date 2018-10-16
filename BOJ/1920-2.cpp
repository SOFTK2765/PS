#include <stdio.h>
#include <algorithm>

using namespace std;

int a[100001], b[100001];

int main()
{
	int n, m;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for(int i=0;i<m;i++)
		scanf("%d", &b[i]);
	sort(&a[0], &a[n]);
	sort(&b[0], &b[m]);
	for(int i=0, j=0;i<n && j<m;)
	{
		if(a[i]==b[j])
		{
			printf("%d\n", 1);
			i++;j++;
		}
		else if(a[i]<b[j]) i++;
		else
		{
			j++;
			printf("%d\n", 0);
		}
	}
	
	return 0;
}
