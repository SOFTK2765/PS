#include <bits/stdc++.h>

using namespace std;

bool check[40001];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        memset(check, 0, sizeof(check));
        int m, n, x, y;
        scanf(" %d %d %d %d", &m, &n, &x, &y);
        int nx = 1, ny = 1;
        if(x<=m)
        {
            int cnt = 1;
            while(nx!=x)
            {
                nx++;
                ny = (ny%n)+1;
                cnt++;
            }
            while(ny!=y)
            {
                ny = ((ny+m-1)%n)+1;
                if(check[ny])
                {
                    cnt = -1;
                    break;
                }
                check[ny] = true;
                cnt += m;
            }
            printf("%d\n", cnt);
        }
        else printf("-1\n");
    }

    return 0;
}