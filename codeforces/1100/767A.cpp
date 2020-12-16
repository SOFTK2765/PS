#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	priority_queue<int> pq;
	int pos = n;
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		pq.push(tmp);
		while(!pq.empty() && pq.top()==pos)
		{
			printf("%d ", pq.top());
			pq.pop();
			pos--;
		}
		printf("\n");
	}


	return 0;
}