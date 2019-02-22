#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, w;
    scanf("%d %d %d %d", &a, &b, &n, &w);
    int res1, res2;
    bool flag1 = false, flag2 = false;
    for(int i=1;a*i<=w && i<=n && !flag2;i++)
        for(int j=1;a*i+b*j<=w && i+j<=n && !flag2;j++)
        {
            if(a*i+b*j==w && i+j==n)
            {
                if(flag1) flag2 = true;
                res1 = i;
                res2 = j;
                flag1 = true;
            }
        }
    if(flag2 || !flag1)printf("-1");
    else if(flag1) printf("%d %d", res1, res2);

    return 0;
}