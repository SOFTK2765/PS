#include <bits/stdc++.h>

using namespace std;

int a[5][3];
double res[4];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        for(int i=0;i<4;i++)
            scanf(" %d %d", &a[i][0], &a[i][1]);
        bool flag = true;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
                res[j] = pow((a[i][0]-a[j][0]), 2)+pow((a[i][1]-a[j][1]), 2);
            sort(res, res+4);
            if(!(res[1]==res[2] && res[1]*2==res[3] && res[1]!=0)) flag = false;
        }
        if(flag) printf("1\n");
        else printf("0\n");
    }

    return 0;
}