#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    int pos = 0, mx = 0;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        pos = a[i].first;
        pq.push(-a[i].second);
        while(!pq.empty() && -pq.top()<=pos) pq.pop();
        mx = max(mx, (int)pq.size());
    }
    printf("%d", mx==0?1:mx);

    return 0;
}