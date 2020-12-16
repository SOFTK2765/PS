#include <bits/stdc++.h>

using namespace std;

char per[] = "00000000";

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> v;
	for(int i=1;i<=n;i++)
		v.push_back(i);
	do
	{
		for(int i=0;i<n;i++)
			if(per[i]=='1') printf("%d ", v[i]);
		printf("\n");
	}while(prev_permutation(per, per+8));

	return 0;
}