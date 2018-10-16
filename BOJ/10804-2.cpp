#include <bits/stdc++.h>

using namespace std;

int a[20];

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
    for(int i=0;i<20;i++)
        a[i] = i+1;
    for(int i=0;i<10;i++)
    {
        int h, t;
        scanf(" %d %d", &h, &t);
        rev(h-1, t-1);
    }
    for(int i=0;i<20;i++)
        printf("%d ", a[i]);

    return 0;
}