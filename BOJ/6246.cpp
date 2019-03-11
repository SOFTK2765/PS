#include <bits/stdc++.h>

using namespace std;

bool check[10001];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0;i<q;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        for(int j=a;j<=n;j+=b)
            check[j] = true;
    }
    int cnt = 0;
    for(int i=1;i<=n;i++)
        if(check[i]) cnt++;
    printf("%d", n-cnt);

    return 0;
}