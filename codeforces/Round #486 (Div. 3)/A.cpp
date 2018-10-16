#include <bits/stdc++.h>

using namespace std;

int a[101];
bool check[101];
int res[101];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        check[a[i]] = true;
    }
    int cnt = 0;
    for(int i=1;i<=100;i++)
        if(check[i]) cnt++;
    if(cnt>=k)
    {
        printf("YES\n");
        cnt = 0;
        int pos = 0;
        for(int i=0;i<=100;i++)
            if(check[i])
            {
                for(int j=0;j<n;j++)
                    if(a[j]==i)
                    {
                        res[pos] = j;
                        pos++;
                        cnt++;
                        break;
                    }
                if(cnt==k) break;
            }
        sort(res, res+pos);
        for(int i=0;i<pos;i++)
            printf("%d ", res[i]+1);
    }
    else printf("NO");

    return 0;
}