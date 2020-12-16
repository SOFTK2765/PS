#include <bits/stdc++.h>

using namespace std;

int n, k;
int res[9], a[9];
bool visit[9];

int f(int pos)
{
	if(pos==n)
	{
		int power = 500;
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			power += a[res[i]]-k;
			if(power<500)
			{
				flag = true;
				break;
			}
		}
		if(!flag) return 1;
		return 0;
	}
	int sum = 0;
	for(int i=0;i<n;i++)
		if(!visit[i])
		{
			visit[i] = true;
			res[pos] = i;
			sum += f(pos+1);
			visit[i] = false;
		}
	return sum;
}

int main()
{
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	printf("%d", f(0));

	return 0;
}