#include <bits/stdc++.h>

using namespace std;

bool check[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        for(int i=tmp1;i<=tmp2;i++)
            check[i] = true;
    }
    int cnt = 0;
    for(int i=1;i<=m;i++)
        if(!check[i]) cnt++;
    printf("%d\n", cnt);
    for(int i=1;i<=m;i++)
        if(!check[i]) printf("%d ", i);

    return 0;
}