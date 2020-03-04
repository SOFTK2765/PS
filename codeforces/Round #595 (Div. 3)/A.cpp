#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        sort(a, a+n);
        bool flag = false;
        for(int i=1;i<n;i++)
            if(a[i]-a[i-1]==1) flag = true;
        printf("%d\n", flag?2:1);
    }

    return 0;
}