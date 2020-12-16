#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	queue<int> q;
	for(int i=1;i<=n;i++)
		q.push(i);
	printf("<");
	int cnt = 0;
	while(!q.empty())
	{
		int x = q.front();
		cnt++;
		q.pop();
		if(cnt==k)
		{
			cnt = 0;
			if(q.size()!=n-1) printf(", ");
			printf("%d", x);
		}
		else q.push(x);
	}
	printf(">");

	return 0;
}