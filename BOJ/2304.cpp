#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    stack<pair<int, int>> stk1, stk2;
    for(int i=0;i<n;i++)
        if(stk1.empty() || stk1.top().second<a[i].second) stk1.push(a[i]);
    for(int i=n-1;i>=0;i--)
        if(stk2.empty() || stk2.top().second<a[i].second) stk2.push(a[i]);
    int sum = (stk2.top().first-stk1.top().first+1)*stk1.top().second;
    while(!stk1.empty())
    {
        int tmp = stk1.top().first;
        stk1.pop();
        if(stk1.empty()) break;
        sum += (tmp-stk1.top().first)*stk1.top().second;
    }
    while(!stk2.empty())
    {
        int tmp = stk2.top().first;
        stk2.pop();
        if(stk2.empty()) break;
        sum += (stk2.top().first-tmp)*stk2.top().second;
    }
    printf("%d", sum);

    return 0;
}