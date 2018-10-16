#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[8], res[8];

void f(int pos)
{
    if(pos==m)
    {
        for(int i=0;i<m;i++)
            printf("%d ", res[i]);
        printf("\n");
        return;
    }
    for(int i=0;i<n;i++)
    {
        res[pos] = a[i];
        f(pos+1);
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    f(0);

    return 0;
}