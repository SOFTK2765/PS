#include <bits/stdc++.h>

using namespace std;

int a[9], res[9];
bool check[9];
int n, m;

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
        if(!check[i])
        {
            check[i] = true;
            res[pos] = a[i];
            f(pos+1);
            check[i] = false;
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