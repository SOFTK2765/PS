#include <bits/stdc++.h>

using namespace std;

int a[200001], cnt[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        cnt[a[i]]++;
    int mx = 0, mxi = 0;
    for(int i=0;i<200001;i++)
        if(mx<cnt[i])
        {
            mx = cnt[i];
            mxi = i;
        }
    int pcnt = n-mx;
    printf("%d\n", pcnt);
    for(int i=0;i<n;i++)
    {
        if(a[i]==mxi)
        {
            int tpos = i;
            while(tpos-1>=0 && a[--tpos]!=mxi)
            {
                printf("%d %d %d\n", a[tpos]<a[tpos+1]?1:2, tpos+1, tpos+2);
                a[tpos] = mxi;
            }
        }
        else continue;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==mxi)
        {
            int tpos = i;
            while(tpos+1<n && a[++tpos]!=mxi)
            {
                printf("%d %d %d\n", a[tpos]<a[tpos-1]?1:2, tpos+1, tpos);
                a[tpos] = mxi;
            }
        }
        else continue;
    }

    return 0;
}