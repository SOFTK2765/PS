#include <bits/stdc++.h>

using namespace std;

int res[6];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        for(int i=0;i<n;i++)
            res[i] = 0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                int tmp;
                scanf(" %d", &tmp);
                res[j] += tmp;
            }
        int mx = 0, mi;
        for(int i=0;i<n;i++)
            if(mx<res[i])
            {
                mx = res[i];
                mi = i;
            }
        printf("%d\n", mi+1);
    }

    return 0;
}