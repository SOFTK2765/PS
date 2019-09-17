#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    stack<pair<int, int>> stk;
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        if(stk.empty() || stk.top().first<a[i]) stk.push({a[i], i});
        else
        {
            while(!stk.empty() && stk.top().first>=a[i])
            {
                int h = stk.top().first;
                stk.pop();
                mx = max(mx, h*(i-(stk.empty()?0:stk.top().second+1)));
            }
            stk.push({a[i], i});
        }
    }
    while(!stk.empty())
    {
        int h = stk.top().first;
        stk.pop();
        mx = max(mx, h*(n-(stk.empty()?0:stk.top().second+1)));
    }
    printf("%d", mx);

    return 0;
}