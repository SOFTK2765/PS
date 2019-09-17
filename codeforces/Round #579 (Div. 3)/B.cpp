#include <bits/stdc++.h>

using namespace std;

int a[401];
int cnt[10001];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        memset(cnt, 0, sizeof(cnt));
        int n;
        scanf(" %d", &n);
        for(int i=0;i<4*n;i++)
        {
            scanf(" %d", &a[i]);
            cnt[a[i]]++;
        }
        bool flag = false;
        for(int i=1;i<=10000;i++)
            if(cnt[i]%2!=0)
            {
                flag = true;
                printf("NO\n");
                break;
            }
        if(flag) continue;
        else
        {
            sort(a, a+4*n);
            int tmp = a[0]*a[4*n-1];
            for(int i=a[0];i*i<=tmp;i++)
            {
                if(cnt[i]!=cnt[tmp/i])
                {
                    flag = true;
                    printf("NO\n");
                    break;
                }
            }
            if(!flag) printf("YES\n");
        }
    }

    return 0;
}