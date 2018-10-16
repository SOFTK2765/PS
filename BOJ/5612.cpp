#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int max = m;
    if(m<0)
    {
        printf("%d", 0);
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        m += a;
        m -= b;
        if(m<0)
        {
            printf("%d", 0);
            return 0;
        }
        if(max<m) max=m; 
    }
    printf("%d", max);

    return 0;
}