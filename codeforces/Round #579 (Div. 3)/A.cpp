#include <bits/stdc++.h>

using namespace std;

int a[201];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        for(int i=0;i<n;i++)
            a[i]--;
        if(n==1) printf("YES\n");
        else
        {
            int tmp = a[0];
            bool flag = false;
            if(a[1]==(tmp+1)%n)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]!=tmp)
                    {
                        flag = true;
                        printf("NO\n");
                        break;
                    }
                    tmp = (tmp+1)%n;
                }
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]!=tmp)
                    {
                        flag = true;
                        printf("NO\n");
                        break;
                    }
                    tmp = (tmp-1+n)%n;
                }
            }
            if(!flag) printf("YES\n");
        }
    }

    return 0;
}