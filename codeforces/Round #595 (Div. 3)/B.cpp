#include <bits/stdc++.h>

using namespace std;

int a[200001], check[200001];

int main()
{
    int q;
    scanf(" %d", &q);
    while(q--)
    {
        memset(check, 0, sizeof(check));
        int n;
        scanf(" %d", &n);
        for(int i=1;i<=n;i++)
            scanf(" %d", &a[i]);
        for(int i=1;i<=n;i++)
        {
            if(check[i]==0)
            {
                int cnt = 1, tmp = i;
                if(tmp==i) check[i] = cnt;
                while(a[tmp]!=i)
                {
                    tmp = a[tmp];
                    cnt++;
                }
                tmp = i;
                while(a[tmp]!=i)
                {
                    check[tmp] = cnt;
                    tmp = a[tmp];
                }
            }
        }
        for(int i=1;i<=n;i++)
            printf("%d ", check[i]);
        printf("\n");
    }

    return 0;
}