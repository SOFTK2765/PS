#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[500001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i].first);
        a[i].second = i;
    }
    sort(a, a+n);
    int mx = 0;
    for(int i=0;i<n;i++)
        if(a[i].second>i) mx = max(mx, a[i].second-i);
    printf("%d", mx+1);

    return 0;
}