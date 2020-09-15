#include <bits/stdc++.h>

using namespace std;

char a[5][5];

int main()
{
	for(int i=0;i<4;i++)
		scanf(" %s", a[i]);
	bool flag = false;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			int cnt1 = 0, cnt2 = 0;
			for(int k=0;k<2;k++)
				for(int l=0;l<2;l++)
				{
					if(a[i+k][j+l]=='#') cnt1++;
					else cnt2++;
				}
			if(cnt1==4 || cnt2==4 || (cnt1==1 && cnt2==3) || (cnt1==3 && cnt2==1)) flag = true;
		}
	printf("%s", flag?"YES":"NO");

	return 0;
}