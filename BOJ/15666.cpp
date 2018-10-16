#include <bits/stdc++.h>

using namespace std;

int a[9];
int b[9];
int save[9];

int n, m, p = 0;

void f(int pos, int ni)
{
    if(pos==m)
    {
        for(int i=0;i<m;i++)
            printf("%d ", save[i]);
        printf("\n");
        return;
    }
    for(int i=ni;i<p;i++)
    {
        save[pos] = b[i];
        f(pos+1, i);
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int pre = 0;
    for(int i=0;i<n;i++)
        if(pre!=a[i]) b[p++] = pre = a[i];
    f(0, 0);

    return 0;
}