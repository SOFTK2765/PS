#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int res = 1;
    if(m==1)
    {
        printf("0");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        res *= (tmp==0?1:tmp);
        res %= m;
    }
    printf("%d", res);

    return 0;
}