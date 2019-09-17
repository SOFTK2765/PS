#include <bits/stdc++.h>

using namespace std;

int a[500001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    stack<pair<int, int>> stk;
    stk.push({a[0], 1});
    printf("%d ", 0);
    int si = 0;
    for(int i=1;i<n;i++)
    {
        if(stk.top().first>a[i]) si = stk.top().second;
        else while(!stk.empty() && stk.top().first<a[i])
        {
            stk.pop();
            if(!stk.empty()) si = stk.top().second;
            else si = 0;
        }
        printf("%d ", si);
        stk.push({a[i], i+1});
    }

    return 0;
}