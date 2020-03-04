#include <bits/stdc++.h>

using namespace std;

int a[11][101];
int t[101];

int main()
{
    int b, z;
    scanf("%d %d", &b, &z);
    for(int i=0;i<b;i++)
        for(int j=0;j<z+1;j++)
            scanf(" %d", &a[i][j]);
    for(int i=1;i<=z;i++)
        for(int j=0;j<b;j++)
            for(int k=0;k<z+1;k++)
            {
                if(a[j][k]==i)
                {
                    t[i] = max(t[i], k);
                    break;
                }
                if(k==z)
                {
                    printf("*");
                    return 0;
                }
            }
    int mn = 987654321, mni = 0;
    for(int i=1;i<=z;i++)
    {
        if(t[i]<mn)
        {
            mn = t[i];
            mni = i;
        }
    }
    printf("%d %d\n", mni, mn);

    return 0;
}