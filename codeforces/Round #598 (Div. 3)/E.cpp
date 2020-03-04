#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[200001];
int tres[200001];
bool check[200001], res[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i].first);
        a[i].second = i;
    }
    sort(a, a+n);
    priority_queue<pair<int, int>> pq;
    for(int i=2;i<n-3;i++)
        pq.push({a[i+1].first-a[i].first, i});
    int team, teamcnt;
    team = teamcnt = n/3-1;
    if(team==0)
    {
        printf("%d %d\n", a[n-1].first-a[0].first, 1);
        for(int i=0;i<n;i++)
            printf("%d ", 1);
        return 0;
    }
    while(team)
    {
        if(pq.empty()) break;
        int ind = pq.top().second;
        pq.pop();
        if(check[ind]) continue;
        team--;
        res[ind] = true;
        for(int i=-2;i<=2;i++)
            if(0<=ind+i && ind+i<n) check[ind+i] = true;
    }
    int tn = 1;
    long long sum = 0, pre = 0;
    for(int i=0;i<n;i++)
    {
        tres[a[i].second] = tn;
        if(res[i]==1)
        {
            sum += a[i].first-a[pre].first;
            pre = i+1;
            tn++;
        }
    }
    sum += a[n-1].first-a[pre].first;
    printf("%lld %d\n", sum, tn);
    for(int i=0;i<n;i++)
        printf("%d ", tres[i]);
    printf("\n");

    return 0;
}