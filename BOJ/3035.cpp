#include <bits/stdc++.h>

using namespace std;

char a[51][51];

int main()
{
    int r, c, zr, zc;
    scanf("%d %d %d %d", &r, &c, &zr, &zc);
    for(int i=0;i<r;i++)
        scanf(" %s", a[i]);
    for(int i=0;i<r;i++)
        for(int ir=0;ir<zr;ir++)
        {
            for(int j=0;j<c;j++)
                for(int jc=0;jc<zc;jc++)
                    printf("%c", a[i][j]);
            printf("\n");
        }

    return 0;
}