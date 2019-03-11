#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[50001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    int res = 0;
    for(int i=0;i<n;i++, res++)
        if(res%(a[i].first+a[i].second)<a[i].second) res += (a[i].second-(res%(a[i].first+a[i].second)));
    printf("%d", res);

    return 0;
}