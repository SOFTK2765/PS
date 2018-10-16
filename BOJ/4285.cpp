#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    while(1)
    {
        int k;
        scanf(" %d", &k);
        if(k==0) break;
        int m;
        scanf(" %d", &m);
        for(int i=0;i<k;i++)
            scanf(" %d", &a[i]);
        bool flag = false;
        for(int i=0;i<m;i++)
        {
            int c, r;
            scanf(" %d %d", &c, &r);
            int cnt = 0;
            for(int j=0;j<c;j++)
            {
                int tmp;
                scanf(" %d", &tmp);
                for(int l=0;l<k;l++)
                    if(tmp==a[l]) cnt++;
            }
            if(cnt<r) flag = true;
        }
        if(flag) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}