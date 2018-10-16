#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n, w, l;
    scanf("%d %d %d", &n, &w, &l);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int nw = 0, cnt = 0, tcnt = 0;
    queue<pair<int, int>> q;
    for(int i=0;i<n;i++)
    {
        while(!q.empty() && nw+a[i]>l)
            {
                nw -= a[q.front().first];
                cnt += q.front().second-tcnt;
                tcnt = q.front().second;
                q.pop();
            }
        nw += a[i];
        q.push({i, cnt});
        cnt++;
        if(cnt-q.front().second==w)
        {
            nw -= a[q.front().first];
            q.pop();
        }
    }
    printf("%d", cnt+w);

    return 0;
}