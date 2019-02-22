#include <bits/stdc++.h>

using namespace std;

int n;
pair<int, int> a[100001];

int bsx(int ni, int tmp)
{
    int lo = ni, hi = n-1, target = (int)ceil(sqrt(tmp))+a[ni].first;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(a[mid].first<=target) lo = mid+1;
        else if(a[mid].first>target) hi = mid-1;
    }
    return lo-1;
}

int d(const pair<int, int> &a, const pair<int, int> &b){return (a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second);}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    int tmp = d(a[0], a[1]);
    for(int i=0;i<n;i++)
    {
        int txend = bsx(i, tmp);
        set<pair<int, int>> bst;
        for(int j=i+1;j<=txend;j++)
            bst.insert({a[j].second, a[j].first});
        for(set<pair<int, int>>::iterator it=bst.begin();it!=bst.end();it++)
        {
            int td = ((*it).second-a[i].first)*((*it).second-a[i].first)+((*it).first-a[i].second)*((*it).first-a[i].second);
            if(td<tmp) tmp = td;
            else break;
        }
    }
    printf("%d", tmp);

    return 0;
}