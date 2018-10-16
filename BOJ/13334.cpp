#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b)
{
    if(a.first.first!=b.first.first) return a.first.first<b.first.first;
    return a.second<b.second;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<pair<int, int>, int>> v;
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        if(a>b) swap(a, b);
        v.push_back({{a, b}, b-a});
    }
    int d;
    scanf("%d", &d);
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<n;i++)
    {
        printf("%d %d %d\n", v[i].first.first, v[i].first.second, v[i].second);
    }

    return 0;
}