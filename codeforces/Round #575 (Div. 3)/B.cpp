#include <bits/stdc++.h>

using namespace std;

int a[200001];
bool check[200001];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        memset(check, 0, sizeof(check));
        int n, k;
        scanf(" %d %d", &n, &k);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                check[i] = true;
                cnt++;
            }
        }
        if(cnt<k) printf("NO\n");
        else
        {
            if(cnt%2==k%2)
            {
                printf("YES\n");
                int tmpcnt = 0;
                for(int i=0;i<n;i++)
                    if(check[i])
                    {
                        if(tmpcnt==k-1)
                        {
                            printf("%d\n", n);
                            break;
                        }
                        printf("%d ", i+1);
                        tmpcnt++;
                    }
            }
            else printf("NO\n");
        }
    }

    return 0;
}