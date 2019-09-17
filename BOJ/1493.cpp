#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[21];
long long res[21];
int n;
bool flag;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){return a.first>b.first;}

void f(int l, int w, int h)
{
    int tmpx;
    for(int i=0;i<n;i++)
    {
        int x = 1, tmp = a[i].first;
        while(tmp--) x *= 2;
        if(l<x || w<x || h<x) continue;
        long long tmpcnt = 1LL*(l/x)*(w/x)*(h/x);
        tmpx = x;
        res[a[i].first] += tmpcnt;
        break;
        if(i==0)
        {
            flag = true;
            return;
        }
    }
    if(l%tmpx!=0 && tmpx!=0) f(l%tmpx, w/tmpx*tmpx, h/tmpx*tmpx);
    if(w%tmpx!=0 && tmpx!=0) f(l/tmpx*tmpx, w%tmpx, h/tmpx*tmpx);
    if(h%tmpx!=0 && tmpx!=0) f(l/tmpx*tmpx, w/tmpx*tmpx, h%tmpx);
    if(l%tmpx!=0 && w%tmpx!=0 && tmpx!=0) f(l%tmpx, w%tmpx, h/tmpx*tmpx);
    if(l%tmpx!=0 && h%tmpx!=0 && tmpx!=0) f(l%tmpx, w/tmpx*tmpx, h%tmpx);
    if(w%tmpx!=0 && h%tmpx!=0 && tmpx!=0) f(l/tmpx*tmpx, w%tmpx, h%tmpx);
    if(l%tmpx!=0 && w%tmpx!=0 && h%tmpx!=0) f(l%tmpx, w%tmpx, h%tmpx);
}

int main()
{
    int l, w, h;
    scanf("%d %d %d %d", &l, &w, &h, &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n, cmp);
    f(l, w, h);
    if(flag) printf("-1");
    else
    {
        for(int i=0;i<n;i++)
        {
            if(res[a[i].first]>a[i].second)
            {
                if(i==n-1)
                {
                    printf("-1");
                    return 0;
                }
                long long tmp = (res[a[i].first]-a[i].second);
                res[a[i].first] -= tmp;
                int tmpcnt = a[i].first-a[i+1].first;
                long long tmpx = 1;
                while(tmpcnt--) tmpx *= 8;
                res[a[i+1].first] += (tmp*tmpx);
            }
        }
        long long sum = 0;
        for(int i=0;i<n;i++)
            sum += res[a[i].first];
        printf("%lld", sum);
    }

    return 0;
}