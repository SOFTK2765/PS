#include <bits/stdc++.h>

using namespace std;

int a[5001], res[5001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int nc = 1;
    bool flag = false;
    for(int i=1;i<=5000 && !flag;i++)
    {
        int cnt = 0;
        for(int j=0;j<n && !flag;j++)
            if(a[j]==i)
            {
                cnt++;
                if(cnt>k) flag = true;
                res[j] = nc;
                nc = (nc%k)+1;
            }
    }
    if(flag) printf("NO");
    else
    {
        printf("YES\n");
        for(int i=0;i<n;i++)
            printf("%d ", res[i]);
    }

    return 0;
}