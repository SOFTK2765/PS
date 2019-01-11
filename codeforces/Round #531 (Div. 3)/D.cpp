#include <bits/stdc++.h>

using namespace std;

int a[300001];
int cnt[3], tcnt[3];
bool check[300001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%1d", &a[i]);
    for(int i=0;i<n;i++)
        cnt[a[i]]++;
    for(int i=0;i<n;i++)
    {
        if(cnt[a[i]]<=n/3)
        {
            printf("%d", a[i]);
            tcnt[a[i]]++;
        }
        else if(cnt[a[i]]>n/3 && tcnt[a[i]]<n/3)
        {
            printf("%d", a[i]);
            tcnt[a[i]]++;
        }
        else
        {
            for(int j=0;j<=2;j++)
            {
                if(cnt[j]<n/3)
                {
                    printf("%d", j);
                    cnt[j]++;
                    cnt[a[i]]--;
                    tcnt[j]++;
                    break;
                }
                else if(cnt[j]>=n/3 && tcnt[j]<n/3)
                {
                    printf("%d", j);
                    tcnt[j]++;
                    break;
                }
            }
        }
    }

    return 0;
}