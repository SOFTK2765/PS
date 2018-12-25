#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){return a.first<b.first;}

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        v.push_back({tmp, i});
    }
    sort(v.begin(), v.end(), cmp);
    int mx = 0;
    for(int i=0;i<n;i++)
        mx = max(i-v[i].second, mx);
    printf("%d", mx-1);

    return 0;
}