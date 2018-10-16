#include <bits/stdc++.h>

using namespace std;

char a[101][101];

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf(" %s", a[i]);
    int e1, e2;
    scanf(" %d %d", &e1, &e2);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            a[i][2*c-1-j] = a[i][j];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            a[2*r-1-i][j] = a[i][j];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            a[2*r-1-i][2*c-1-j] = a[i][j];
    a[e1-1][e2-1] = a[e1-1][e2-1]=='.'?'#':'.';
    for(int i=0;i<2*r;i++)
        printf("%s\n", a[i]);

    return 0;
}