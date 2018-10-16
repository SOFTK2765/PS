#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {c
        int tmp;
        scanf(" %d", &tmp);
        a[tmp] = i;
    }
    for(int i=1;i<=n;i++)
        printf("%d\n", i-a[i]);

    return 0;
}