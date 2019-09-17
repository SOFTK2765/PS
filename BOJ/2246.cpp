#include <bits/stdc++.h>

using namespace std;

pair<pair<int, int>, int> a[10001], b[10001];
bool check[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d %d", &a[i].first.first, &a[i].first.second);
        b[i].first.first = a[i].first.second;
        b[i].first.second = a[i].first.first;
        a[i].second = b[i].second = i;

    }
    sort(a, a+n);
    sort(b, b+n);
    int mn = 987654321;
    for(int i=0;i<n;i++)
        if(mn<=a[i].first.second) check[a[i].second] = true;
        else mn = a[i].first.second;
    mn = 987654321;
    for(int i=0;i<n;i++)
        if(mn<=b[i].first.second) check[b[i].second] = true;
        else mn = b[i].first.second;
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(!check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}