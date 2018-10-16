#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            cnt += (tmp/k);
        }
        printf("%d\n", cnt);
    }

    return 0;
}