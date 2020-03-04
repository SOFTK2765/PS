#include <bits/stdc++.h>

using namespace std;

int a[4][4];

int main()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            a[i][j] = i*3+j;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    memset(a[0], 0, sizeof(a[0]));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}