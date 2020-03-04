#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[200001];

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second!=b.second) return a.second<b.second;
    return a.first<b.first;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n, cmp);
    int pre = 
    for(int i=0;i<n;i++)
    {

    }

    return 0;
}