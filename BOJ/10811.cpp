#include <bits/stdc++.h>

using namespace std;

int a[101];

void rev(int h, int t)
{
    int tmp;
    for(int i=0;i<(t-h+1)/2;i++)
    {
        tmp = a[h+i];
        a[h+i] = a[t-i];
        a[t-i] = tmp;
    }

    return;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        a[i] = i+1;
    while(m--)
    {
        int h, t;
        scanf("%d %d", &h, &t);
        rev(h-1, t-1);
    }
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}