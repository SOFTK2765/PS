#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<double, int> &a, const pair<double, int> &b)
{
    if(a.first!=b.first) return a.first>b.first;
    return a.second<b.second;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<pair<double, int>> v;
    for(int i=0;i<m;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        v.push_back({1.0*b/a, b});
    }
    sort(v.begin(), v.end(), cmp);
    int dsum = 0, sum = 0;
    for(int i=0;i<n;i++)
        if(v[i].second<n) second

    return 0;
}