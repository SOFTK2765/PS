#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

char a[2189][2189];

void f(int n, int x, int y)
{
    if(n==1)
    {
        a[x][y]='*';
        return;
    }
    for(int i=0;i<8;i++)
        f(n/3, x+(n/3)*dx[i], y+(n/3)*dy[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    f(n, (n+1)/2, (n+1)/2);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]=='\0')
            {
                printf(" ");
                continue;
            }
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}