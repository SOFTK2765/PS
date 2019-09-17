#include <bits/stdc++.h>

using namespace std;

pair<pair<int, int>, int> a[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
        scanf(" %d %d %c", &a[i].first.second, &a[i].first.first, &a[i].second);
    sort(a, a+m);
    for(int i=0;i<m;i++)
        printf("%c", a[i].second);

    return 0;
}