#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n, k;
    int m;
    scanf("%lld %d %lld", &n, &m, &k);
    vector<long long> v;
    for(int i=0;i<m;i++)
    {
        long long tmp;
        scanf(" %lld", &tmp);
        v.push_back(tmp);
    }
    int pre = -1, cnt = 0, tmpcnt = 0;
    while(1)
    {
        int mx = 0, mxs;
        cnt++;
        int size = v.size();
        for(int i=0;i<size;i++)
        {
            if((v[i]-1)/k==pre) tmpcnt++;
            else
            {
                if(mx==0 && mx<tmpcnt)
                {
                    mx = tmpcnt;
                    mxs = (v[i]-1)/k;
                }
                pre = (v[i]-1)/k;
                tmpcnt = 1;
            }
            if(mx<tmpcnt)
            {
                mx = tmpcnt;
                mxs = (v[i]-1)/k;
            }
        }
        bool flag = false;
        int vs, ve = -1;
        for(int i=0;i<size;i++)
        {
            if((v[i]-1)/k==mxs)
            {
                if(!flag) vs = i;
                flag = true;
                ve = i+1;
            }
            if(flag && (v[i]-1)/k!=mxs)
                v[i] -= tmpcnt;
        }
        v.erase(v.begin()+vs, v.begin()+ve);
        if(v.size()==0) break;
    }
    printf("%d", cnt);
 
    return 0;
}