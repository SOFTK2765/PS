#include <stdio.h>

int x[100001], y[100001], s[100001];
int t, x1, x2, y1, y2;
bool check[100001];

int main()
{
	int n, q, c;
	scanf("%d %d %d", &n, &q, &c);
	for(int i=0;i<n;i++)
		scanf("%d %d %d", &x[i], &y[i], &s[i]);
	for(int i=0;i<q;i++)
	{
		for(int j=0;j<n;j++)
			check[j]=false;
		scanf("%d %d %d %d %d", &t, &x1, &y1, &x2, &y2);
		int sum=0;
		for(int j=0;j<n;j++)
			if(x1<=x[j] && y1<=y[j] && x2>=x[j] && y2>=y[j]) sum+=(s[j]+t)%(c+1);
		printf("%d\n", sum);
	}
	
	return 0;
}
