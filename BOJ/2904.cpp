#include <bits/stdc++.h>

using namespace std;

bool pn[1000001];
int a[101];
int cnt[1000001];

int main()
{
    for(int i=3;i*i<=1000000;i+=2)
        if(!pn[i]) for(int j=i+i;j<=1000000;j+=i)
            pn[j] = true;
    vector<int> v;
    v.push_back(2);
    for(int i=3;i<=1000000;i+=2)
        if(!pn[i]) v.push_back(i);
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int size = v.size();
    for(int i=0;i<n;i++)
    {
        int tmp = a[i];
        for(int j=0;j<size;j++)
            while(tmp%v[j]==0)
            {
                tmp /= v[j];
                cnt[j]++;
            }
    }
    vector<pair<int, int>> target;
    for(int i=0;i<size;i++)
        if(cnt[i]/n) target.push_back({v[i], cnt[i]/n});
    int tsize = target.size(), rescnt = 0;
    for(int i=0;i<n;i++)
    {
        int tmp = a[i];
        for(int j=0;j<tsize;j++)
        {
            int tmpcnt = 0;
            while(tmp%target[j].first==0)
            {
                tmp /= target[j].first;
                tmpcnt++;
            }
            rescnt += target[j].second-tmpcnt>0?target[j].second-tmpcnt:0;
        }
    }
    int res = 1;
    for(int i=0;i<tsize;i++)
        for(int j=0;j<target[i].second;j++)
            res *= target[i].first;
    printf("%d %d\n", res, rescnt);

    return 0;
}