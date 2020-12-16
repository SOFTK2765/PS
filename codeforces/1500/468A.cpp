#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if(n<4) printf("NO");
	else if(n==4)
	{
		printf("YES\n");
		printf("1 * 2 = 2\n");
		printf("2 * 3 = 6\n");
		printf("6 * 4 = 24\n");
	}
	else if(n==5)
	{
		printf("YES\n");
		printf("4 * 5 = 20\n");
		printf("20 + 3 = 23\n");
		printf("23 + 2 = 25\n");
		printf("25 - 1 = 24\n");
	}
	else if(n==6)
	{
		printf("YES\n");
		printf("5 * 6 = 30\n");
		printf("30 - 4 = 26\n");
		printf("26 - 3 = 23\n");
		printf("23 + 2 = 25\n");
		printf("25 - 1 = 24\n");
	}
	else if(n==7)
	{
		printf("YES\n");
		printf("7 * 6 = 42\n");
		printf("42 - 5 = 37\n");
		printf("4 * 3 = 12\n");
		printf("37 - 12 = 25\n");
		printf("25 - 2 = 23\n");
		printf("23 + 1 = 24\n");
	}
	else
	{
		printf("YES\n");
		printf("%d + %d = %d\n", 5, n, n+5);
		printf("%d + %d = %d\n", 6, n-1, n+5);
		printf("%d - %d = %d\n", n+5, n+5, 0);
		for(int i=7;i<=n-2;i++)
			printf("%d * %d = %d\n", 0, i, 0);
		printf("1 * 2 = 2\n");
		printf("2 * 3 = 6\n");
		printf("6 * 4 = 24\n");
		printf("24 + 0 = 24\n");
	}

	return 0;
}