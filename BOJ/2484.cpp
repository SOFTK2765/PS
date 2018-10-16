#include <bits/stdc++.h>

using namespace std;

int res[7];

int main()
{
    int n;
    scanf("%d", &n);
    int resmx = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=6;j++)
            res[j] = 0;
        for(int j=0;j<4;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            res[tmp]++;
        }
        int mx = 0, pres;
        for(int j=1;j<=6;j++)
            if(res[mx]<res[j]) mx = j;
        if(res[mx]==4) pres = 50000+mx*5000;
        else if(res[mx]==3) pres = 10000+mx*1000;
        else if(res[mx]==2)
        {
            int ind = 0;
            for(int j=1;j<=6;j++)
                if(j!=mx && res[j]==2) ind = j;
            if(ind!=0) pres = 2000+mx*500+ind*500;
            else pres = 1000+mx*100;
        }
        else
            for(int j=0;j<6;j++)
                if(res[6-j]!=0)
                {
                    pres = (6-j)*100;
                    break;
                }
        if(resmx<pres) resmx = pres;
    }
    printf("%d", resmx);

    return 0;
}