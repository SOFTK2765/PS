#include <bits/stdc++.h>

using namespace std;

int a[101];
bool check[101] = {};

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        check[a[i]] = true;
    sort(a, a+n);
    if(x<=a[n-1])
    {
        int cnt = 0;
        for(int i=0;i<n+1;i++)
            if(check[i]==false) cnt++;
        if(check[x]==false) cnt--;
        printf("%d", cnt);
    }
    else
    {
        int cnt = 0;
        for(int i=0;i<x+1;i++)
            if(check[i]==false) cnt++;
        if(check[x]==false) cnt--;
        printf("%d", cnt);
    }

    return 0;
}