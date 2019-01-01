#include <bits/stdc++.h>

using namespace std;

int tscore[101], tt[101], cc[101];
int pscore[101][101];

bool cmp(const pair<int, pair<int, pair<int, int>>> &a, const pair<int, pair<int, pair<int, int>>> &b)
{
    if(a.second.first!=b.second.first) return a.second.first>b.second.first;
    if(a.second.second.first!=b.second.second.first) return a.second.second.first<b.second.second.first;
    return a.second.second.second<b.second.second.second;
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        for(int i=0;i<101;i++)
        {
            tscore[i] = 0;
            tt[i] = 0;
            cc[i] = 0;
        }
        for(int i=0;i<101;i++)
            for(int j=0;j<101;j++)
                pscore[i][j] = 0;
        int n, k, t, m;
        scanf(" %d %d %d %d", &n, &k, &t, &m);
        for(int i=0;i<m;i++)
        {
            int id, num, score;
            scanf(" %d %d %d", &id, &num, &score);
            pscore[id][num] = max(pscore[id][num], score);
            tt[id] = i;
            cc[id]++;
        }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=k;j++)
                tscore[i] += pscore[i][j];
        vector<pair<int, pair<int, pair<int, int>>>> v;
        for(int i=1;i<=n;i++)
            v.push_back({i, {tscore[i], {cc[i], tt[i]}}});
        sort(v.begin(), v.end(), cmp);
        for(int i=0;i<n;i++)
            if(v[i].first==t)
            {
                printf("%d\n", i+1);
                break;
            }
    }

    return 0;
}