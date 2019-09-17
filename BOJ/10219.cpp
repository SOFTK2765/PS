#include <bits/stdc++.h>

using namespace std;

char a[12][12];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int h, w;
        scanf(" %d %d", &h, &w);
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                scanf(" %c", &a[i][j]);
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
                printf("%c", a[i][w-j-1]);
            printf("\n");
        }
    }

    return 0;
}