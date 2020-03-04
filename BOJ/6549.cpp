#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(n==0) break;
        stack<pair<int, int>> stk;
        int tmp;
        scanf(" %d", &tmp);
        stk.push({tmp, 0});
        long long mx = 0;
        for(int i=1;i<n;i++)
        {
            scanf(" %d", &tmp);
            if(stk.top().first<tmp) stk.push({tmp, i});
            else
            {
                while(!stk.empty() && stk.top().first>=tmp)
                {
                    int h = stk.top().first;
                    stk.pop();
                    mx = max(mx, 1LL*h*(i-(stk.empty()?0:stk.top().second+1)));
                }
                stk.push({tmp, i});
            }
        }
        while(!stk.empty())
        {
            int h = stk.top().first;
            stk.pop();
            mx = max(mx, 1LL*h*(n-(stk.empty()?0:stk.top().second+1)));
        }
        printf("%lld\n", mx);
    }

    return 0;
}