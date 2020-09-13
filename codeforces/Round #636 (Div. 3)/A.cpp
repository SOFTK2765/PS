#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=2;i<n;i++)
			if(n%((int)pow(2, i)-1)==0)
			{
				printf("%d\n", n/((int)pow(2, i)-1));
				break;
			}
	}

	return 0;
}