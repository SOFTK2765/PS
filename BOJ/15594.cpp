#include <bits/stdc++.h>

using namespace std;

int a[101], b[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        b[i] = a[i];
    sort(b, b+n);
    int cnt = 0;
    for(int i=n-1;i>=0;i--)
    {
        bool flag = false;
        for(int j=0;j<n;j++)
            if(a[j]!=b[j]) flag = true;
        if(!flag)
        {
            printf("%d", cnt);
            break;
        }
        int mx = 0, mxi = 0;
        for(int j=0;j<=i;j++)
            if(mx<a[j])
            {
                mx = a[j];
                mxi = j;
            }
        if(mxi!=i && a[mxi]!=a[i])
        {
            swap(a[mxi], a[i]);
            cnt++;
        }
    }

    return 0;
}