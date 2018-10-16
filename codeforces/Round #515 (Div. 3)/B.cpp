#include <bits/stdc++.h>

using namespace std;

int a[1001];
bool check[1001];

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int cnt = 0;
    if(n<=r)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                printf("1");
                return 0;
            }
            if(i==n-1)
            {
                printf("-1");
                return 0;
            }
        }
    }
    for(int i=r-1;i<n;)
    {
        if(i==r-1)
        {
            for(int j=0;j<r;j++)
            {
                if(a[i-j]==1)
                {
                    a[i-j] = 0;
                    for(int k=0;k<r;k++)
                    {
                        if(0<=i-j-k && i-j-k<n) check[i-j-k] = true;
                        if(0<=i-j+k && i-j+k<n) check[i-j+k] = true;
                    }
                    cnt++;
                    i = i-j+2*r-1;
                    if(i>=n)
                    {
                        i = n-1;
                        for(int k=0;k<n;k++)
                        {
                            if(!check[k]) break;
                            if(k==n-1)
                            {
                                printf("%d", cnt);
                                return 0;
                            }
                        }
                    }
                    break;
                }
                if(i-j==0)
                {
                    printf("-1");
                    return 0;
                }
            }
        }
        else
        {
            for(int j=0;j<2*r-1;j++)
            {
                if(a[i-j]==1)
                {
                    a[i-j] = 0;
                    for(int k=0;k<r;k++)
                    {
                        if(0<=i-j-k && i-j-k<n) check[i-j-k] = true;
                        if(0<=i-j+k && i-j+k<n) check[i-j+k] = true;
                    }
                    cnt++;
                    i = i-j+2*r-1;
                    if(i>=n)
                    {
                        i = n-1;
                        for(int k=0;k<n;k++)
                        {
                            if(!check[k]) break;
                            if(k==n-1)
                            {
                                printf("%d", cnt);
                                return 0;
                            }
                        }
                    }
                    break;
                }
                if(j==2*r-2)
                {
                    printf("-1");
                    return 0;
                }
            }
        }
    }

    return 0;
}