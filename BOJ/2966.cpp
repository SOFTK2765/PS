#include <stdio.h>
#include <string.h>

char ua[3][7]={"ABC", "BABC", "CCAABB"};
char name[3][10] = {"Adrian", "Bruno", "Goran"};

int main()
{
	int n, max=0;
	int score[3];
	int ptf[3]={0, 0, 0};
	char answer[101];
	scanf("%d %s", &n, answer);
	for(int i=0;i<3;i++)
	{
		int count=0;
		int l = strlen(ua[i]);
		for(int j=0;j<n;j++)
			if(ua[i][j%l]==answer[j]) count++;
		score[i]=count;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(ptf[i]==1 || ptf[j]==1) continue;
			if(score[i]>=score[j])
			{
				if(j==2 && ptf[j]!=1 && max<=score[i])
				{
					if(ptf[0]+ptf[1]+ptf[2]==0) printf("%d\n", score[i]);
					printf("%s\n", name[i]);
					max=score[i];
					ptf[i]=1;
					i=0;
				}
				else continue;
			}
			else break;
		}
		if(ptf[0]+ptf[1]+ptf[2]==3) break;
	}
	
	return 0;
}
