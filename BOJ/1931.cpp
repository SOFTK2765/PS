#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second!=b.second) return a.second<b.second;
    return a.first<b.first;
}

pair<int, int> a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n, cmp);
    int pos = a[0].second, cnt = 1, tmp = 0;
    while(tmp<n-1)
    {
        while(tmp<n-1 && a[++tmp].first<pos);
        cnt++;
        pos = a[tmp].second;
    }
    printf("%d", cnt);

    return 0;
}