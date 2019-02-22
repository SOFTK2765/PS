#include <bits/stdc++.h>

using namespace std;

int a[1001], cnt[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<m;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        for(int j=0;j<n;j++)
            if(a[j]<=tmp)
            {
                cnt[j+1]++;
                break;
            }
    }
    int mx = 0;
    for(int i=0;i<1001;i++)
        mx = max(mx, cnt[i]);
    for(int i=0;i<1001;i++)
        if(cnt[i]==mx) printf("%d", i);

    return 0;
}