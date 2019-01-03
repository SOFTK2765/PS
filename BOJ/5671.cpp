#include <bits/stdc++.h>

using namespace std;

bool cnt[11];

int main()
{
    int n, m;
    while(~scanf(" %d %d", &n, &m))
    {
        int rescnt = 0;
        for(int i=n;i<=m;i++)
        {
            memset(cnt, 0, sizeof(cnt));
            int tmp = i;
            while(tmp)
            {
                if(cnt[tmp%10]) break;
                cnt[tmp%10] = true;
                tmp /= 10;
                if(tmp==0) rescnt++;
            }
        }
        printf("%d\n", rescnt);
    }

    return 0;
}