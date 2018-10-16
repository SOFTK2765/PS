#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        int mx = 0, cnt = 0;
        for(int j=0;j<n;j++)
        {
            int h;
            scanf(" %d", &h);
            if(mx<h) mx = h;
            else cnt++;
        }
        printf("Case #%d: %d\n", i+1, cnt);
    }

    return 0;
}