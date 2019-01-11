#include <bits/stdc++.h>

using namespace std;

int a[51];
bool check[51];
int n, d;
bool flag;

void f(int pos)
{
    if(pos==d || flag)
    {
        flag = true;
        for(int i=0;i<n;i++)
            if(a[i]==pos) f(i);
        a[pos] = -2;
        check[pos] = false;
        if(pos==d) flag = false;
        return;
    }
    for(int i=0;i<n;i++)
        if(a[i]==pos)
        {
            if(i!=d) check[pos] = false;
            f(i);
        }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    scanf(" %d", &d);
    memset(check, 1, sizeof(check));
    for(int i=0;i<n;i++)
        if(a[i]==-1) f(i);
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}