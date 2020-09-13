#include <bits/stdc++.h>

using namespace std;

char a[4][4];

int main()
{
	for(int i=0;i<3;i++)
		scanf("%s ", a[i]);
	bool flag = false;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(a[i][j]!=a[2-i][2-j]) flag = true;
	printf("%s", flag?"NO":"YES");

	return 0;
}