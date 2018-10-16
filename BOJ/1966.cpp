#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        queue<pair<int, bool>> q;
        for(int i=0;i<n;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            q.push({tmp, i!=m?false:true});
        }
        int cnt = 0;
        while(!q.empty())
        {
            pair<int, bool> tmp = {q.front().first, q.front().second};
            q.pop();
            int size = q.size();
            bool flag = false;
            while(size--)
            {
                pair<int, bool> tmptmp = {q.front().first, q.front().second};
                q.pop();
                if(tmp.first<tmptmp.first) flag = true;
                q.push(tmptmp);
            }
            if(flag) q.push(tmp);
            else
            {
                cnt++;
                if(tmp.second) break;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}