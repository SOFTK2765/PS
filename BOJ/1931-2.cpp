#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[100001];

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second!=b.second) return a.second<b.second;
    return a.first<b.first;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n, cmp);
    int end = 0, cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i].first<end) continue;
        else
        {
            end = a[i].second;
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}