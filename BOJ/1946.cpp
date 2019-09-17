#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[100001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d %d", &a[i].first, &a[i].second);
        sort(a, a+n);
        int mn = 987654321, cnt = 0;
        for(int i=0;i<n;i++)
            if(mn>a[i].second)
            {
                mn = a[i].second;
                cnt++;
            }
        printf("%d\n", cnt);
    }

    return 0;
}