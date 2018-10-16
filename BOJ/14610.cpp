#include <bits/stdc++.h>

using namespace std;

int cnt[101];
int a[101][11];
bool check[11];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    bool res = true;
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &cnt[i]);
        if(cnt[i]>=m || cnt[i]==0) res = false;
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==1)
            {
                cnt[i]--;
                check[j] = true;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int tmpcnt = 0;
        for(int j=0;j<m;j++)
            if(a[i][j]==-1 && cnt[i]>0)
            {
                if(!check[j])
                {
                    cnt[i]--;
                    check[j] = true;
                }
                else tmpcnt++;
            }
        if(cnt[i]>tmpcnt) res = false;
    }
    for(int i=0;i<m;i++)
        if(!check[i]) res = false;
    printf("%s", res?"YES":"NO");

    return 0;
}