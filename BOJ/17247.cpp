#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    bool flag = false;
    int x1, y1, x2, y2;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]==1)
                if(!flag)
                {
                    x1 = j;
                    y1 = i;
                    flag = true;
                }
                else
                {
                    x2 = j;
                    y2 = i;
                }
    printf("%d", abs(x1-x2)+abs(y1-y2));

    return 0;
}