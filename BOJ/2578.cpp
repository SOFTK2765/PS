#include <bits/stdc++.h>

using namespace std;

int a[6][6];
bool check[6][6];

int main()
{
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<25;i++)
    {
        int num;
        scanf(" %d", &num);
        for(int j=0;j<5;j++)
            for(int k=0;k<5;k++)
                if(a[j][k]==num) check[j][k] = true;
        int bcnt = 0;
        for(int j=0;j<5;j++)
        {
            int cnt = 0;
            for(int k=0;k<5;k++)
                if(check[j][k]) cnt++;
            if(cnt==5) bcnt++; 
        }
        for(int j=0;j<5;j++)
        {
            int cnt = 0;
            for(int k=0;k<5;k++)
                if(check[k][j]) cnt++;
            if(cnt==5) bcnt++;
        }
        for(int j=0;j<5;j++)
        {
            if(!check[j][j]) break;
            if(j==4) bcnt++;
        }
        for(int j=0;j<5;j++)
        {
            if(!check[j][4-j]) break;
            if(j==4) bcnt++;
        }
        if(bcnt>=3)
        {
            printf("%d", i+1);
            break;
        }
    }

    return 0;
}