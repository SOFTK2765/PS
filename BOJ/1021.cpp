#include <bits/stdc++.h>

using namespace std;

int a[51], b[51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    deque<int> dq;
    for(int i=1;i<=n;i++)
        dq.push_back(i);
    for(int i=0;i<m;i++)
        scanf(" %d", &b[i]);
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        int size = dq.size(), s;
        for(int j=0;j<size;j++)
        {
            int tmp = dq.front();
            if(tmp==b[i]) s = j;
            dq.pop_front();
            dq.push_back(tmp);
        }
        if(s<size-s)
        {
            for(int j=0;j<s;j++)
            {
                int tmp = dq.front();
                dq.pop_front();
                dq.push_back(tmp);
            }
            dq.pop_front();
            sum += s;
        }
        else
        {
            for(int j=0;j<size-s;j++)
            {
                int tmp = dq.back();
                dq.pop_back();
                dq.push_front(tmp);
            }
            dq.pop_front();
            sum += size-s;
        }
    }
    printf("%d", sum);

    return 0;
}