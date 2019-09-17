#include <bits/stdc++.h>

using namespace std;

int cnt[200001];
bool check[200001];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=1;i<=n;i++)
        {
            cnt[i] = 0;
            check[i] = false;
        }
        int tmp;
        for(int i=0;i<n;i++)
        {
            scanf(" %d", &tmp);
            cnt[tmp]++;
        }
        int sum = 0;
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            if(!check[cnt[i]])
            {
                sum += cnt[i];
                check[cnt[i]] = true;
            }
            else if(cnt[i]!=0) v.push_back(cnt[i]);
        }
        int size = v.size();
        for(int i=0;i<size;i++)
        {
            int tmpcnt = v[i];
            while(check[--tmpcnt] && tmpcnt>0);
            if(tmpcnt>0)
            {
                check[tmpcnt] = true;
                sum += tmpcnt;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}