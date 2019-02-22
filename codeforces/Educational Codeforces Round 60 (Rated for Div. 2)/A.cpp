#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int mx = 0, mxcnt = 0;
    for(int i=0;i<n;i++)
    {
        int cnt = 1;
        if(mx==a[i])
        {
            while(i+1<n && a[i+1]==a[i])
            {
                cnt++;
                i++;
            }
            mxcnt = max(cnt, mxcnt);
        }
        else if(mx<a[i])
        {
            mx = a[i];
            while(i+1<n && a[i+1]==a[i])
            {
                cnt++;
                i++;
            }
            mxcnt = cnt;
        }
    }
    printf("%d", mxcnt);

    return 0;
}