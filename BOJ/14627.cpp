#include <bits/stdc++.h>

using namespace std;

int a[1000001];

int main()
{
    int s, c, l;
    scanf("%d %d", &s, &c);
    for(int i=0;i<s;i++)
        scanf(" %d", &a[i]);
    sort(a, a+s);
    if(s==1 && a[0]/c==0)
    {
        printf("%d", a[0]);
        return 0;
    }
    for(int i=0;i<s;i++)
    {
        if(a[i]!=1) break;
        if(i==s-1)
        {
            printf("%d", s==c?0:s);
            return 0;
        }
    }
    int lo = 0, hi = a[s-1], res = 0, precnt, preres;
    while(1)
    {
        preres = res;
        int cnt;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            if(mid==0)
            {
                res = 1;
                break;
            }
            cnt = 0;
            for(int i=0;i<s;i++)
                cnt += (a[i]/mid);
            if(cnt==c)
            {
                res = mid;
                lo = mid;
                precnt = cnt;
                break;
            }
            if(cnt>c) lo = mid+1;
            else hi = mid-1;
        }
        if(lo>hi) res = lo-1;
        if(preres==res) break;
    }
    int cnt = 0;
    do
    {
        res++;
        for(int i=0;i<s;i++)
            cnt += (a[i]/res);
    }while(cnt==c);
    res--;
    int sum = 0;
    for(int i=0;i<s;i++)
        sum += a[i];
    printf("%d", sum-res*c<0?sum:sum-res*c);

    return 0;
}