#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[9], res[9];

void f(int pos, int p)
{
    if(pos==m)
    {
        for(int i=0;i<m;i++)
            printf("%d ", res[i]);
        printf("\n");
        return;
    }
    for(int i=p;i<n;i++)
    {
        res[pos] = a[i];
        f(pos+1, i+1);
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    f(0, 0);

    return 0;
}