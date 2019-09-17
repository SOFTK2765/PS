#include <bits/stdc++.h>

using namespace std;

int n, cnt;
int a[1001], b[1001];

void f(int l, int r)
{
    if(l>r) return;
    int pos = a[cnt++];
    if(l==r)
    {
        printf("%d ", pos);
        return;
    }
    for(int i=l;i<=r;i++)
        if(b[i]==pos)
        {
            f(l, i-1);
            f(i+1, r);
        }
    printf("%d ", pos);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int rt = a[0];
        for(int i=0;i<n;i++)
            scanf(" %d", &b[i]);
        cnt = 1;
        for(int i=0;i<n;i++)
            if(b[i]==rt)
            {
                f(0, i-1);
                f(i+1, n-1);
                printf("%d\n", rt);
            }
    }

    return 0;
}