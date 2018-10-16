#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> a(n);
    for(int i=0;i<n;i++)
        scanf("%d %d", &a[i].first, &a[i].second);
    sort(a.begin(), a.end(), cmp);
    for(int i=0;i<n;i++)
        printf("%d %d\n", a[i].first, a[i].second); 

    return 0;
}