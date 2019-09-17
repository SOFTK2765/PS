#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);
    priority_queue<int> pq, candidate;
    set<int> check;
    vector<int> pn;
    for(int i=0;i<k;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        check.insert(tmp);
        pq.push(tmp);
        candidate.push(-tmp);
        pn.push_back(tmp);
    }
    sort(pn.begin(), pn.end());
    int pnsize = pn.size();
    while(!candidate.empty())
    {
        int x = -candidate.top();
        candidate.pop();
        for(int i=0;i<pnsize;i++)
        {
            if(pq.size()==n && x*pn[i]>=pq.top()) break;
            if(1LL*x*pn[i]>=(1LL<<31)) break;
            if(check.find(x*pn[i])==check.end())
            {
                check.insert(x*pn[i]);
                pq.push(x*pn[i]);
                candidate.push(-x*pn[i]);
            }
            if(pq.size()>n) pq.pop();
        }
    }
    while(pq.size()>n) pq.pop();
    printf("%d", pq.top());

    return 0;
}