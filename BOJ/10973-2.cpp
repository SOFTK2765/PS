#include <bits/stdc++.h>

using namespace std;

int a[10001];
int n, spos;

void f(int pos)
{
    if(a[pos-1]>a[pos])
    {
        int ind;
        for(int i=pos;i<n;i++)
        {
            if(a[pos-1]<a[i])
            {
                ind = i-1;
                break;
            }
            if(i==n-1) ind = n-1;
        }
        int tmp;
        tmp = a[ind];
        a[ind] = a[pos-1];
        a[pos-1] = tmp;
        spos = pos;

        return;
    }
    f(pos-1);
}

bool cmp(const int &a, const int &b) {return a>b;}

int main()
{
    scanf("%d", &n);
    if(n==1)
    {
        printf("%d", -1);

        return 0;
    }
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]) break;
        if(i==n-2)
        {
            printf("%d", -1);

            return 0;
        }
    }
    f(n-1);
    sort(a+spos, a+n, cmp);
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}