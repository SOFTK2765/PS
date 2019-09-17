#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    stack<int> stk[7];
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        while(!stk[tmp1].empty() && stk[tmp1].top()>tmp2)
        {
            cnt++;
            stk[tmp1].pop();
        }
        if(stk[tmp1].empty() || (!stk[tmp1].empty() && stk[tmp1].top()!=tmp2))
        {
            cnt++;
            stk[tmp1].push(tmp2);
        }
    }
    printf("%d", cnt);

    return 0;
}