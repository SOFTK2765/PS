#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int chance = n/2;
	if(chance>k || (chance==0 && k!=0)) printf("-1");
	else
	{
		if(chance==0) printf("1");
		else
		{
			int target = k-chance+1;
			while(target<=100000) target *= 10;
			printf("%d %d ", target, target+k-chance+1);
			for(int i=1;i<=chance-1;i++)
				printf("%d %d ", 2*i-1, 2*i);
			if(n%2==1) printf("%d", 2*chance-1);
		}
	}

	return 0;
}