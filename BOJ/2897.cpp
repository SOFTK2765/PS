#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 1, 0, 1};
const int dy[] = {0, 0, 1, 1};

char a[51][51];
int res[5] = {};

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf("%s", a[i]);
    for(int i=0;i<r-1;i++)
        for(int j=0;j<c-1;j++)
        {
            int tcnt1 = 0, tcnt2 = 0, tcnt3 = 0;
            for(int k=0;k<4;k++)
                a[i+dy[k]][j+dx[k]]=='#'?tcnt1++:(a[i+dy[k]][j+dx[k]]=='.'?tcnt2++:tcnt3++);
            if(tcnt1>0) continue;
            res[tcnt3]++;
        }
    for(int i=0;i<5;i++)
        printf("%d\n", res[i]);

    return 0;
}