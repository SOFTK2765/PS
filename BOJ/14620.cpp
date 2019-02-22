#include <bits/stdc++.h>

using namespace std;

int a[11][11];
bool check[11][11];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    int tmp = 0, mn = 987654321;
    for(int i1=1;i1<n-1;i1++)
        for(int j1=1;j1<n-1;j1++)
        {
            if(!check[i1][j1] && !check[i1-1][j1] && !check[i1+1][j1] && !check[i1][j1-1] && !check[i1][j1+1])
            {
                check[i1][j1] = check[i1-1][j1] = check[i1+1][j1] = check[i1][j1-1] = check[i1][j1+1] = true;
                tmp += (a[i1][j1]+a[i1-1][j1]+a[i1+1][j1]+a[i1][j1-1]+a[i1][j1+1]);
                for(int i2=i1;i2<n-1;i2++)
                    for(int j2=(i2==i1?j1:1);j2<n-1;j2++)
                    {
                        if(!check[i2][j2] && !check[i2-1][j2] && !check[i2+1][j2] && !check[i2][j2-1] && !check[i2][j2+1])
                        {
                            check[i2][j2] = check[i2-1][j2] = check[i2+1][j2] = check[i2][j2-1] = check[i2][j2+1] = true;
                            tmp += (a[i2][j2]+a[i2-1][j2]+a[i2+1][j2]+a[i2][j2-1]+a[i2][j2+1]);
                            for(int i3=i2;i3<n-1;i3++)
                                for(int j3=(i3==i2?j2:1);j3<n-1;j3++)
                                {
                                    if(!check[i3][j3] && !check[i3-1][j3] && !check[i3+1][j3] && !check[i3][j3-1] && !check[i3][j3+1])
                                    {
                                        tmp += (a[i3][j3]+a[i3-1][j3]+a[i3+1][j3]+a[i3][j3-1]+a[i3][j3+1]);
                                        mn = min(mn, tmp);
                                        tmp -= (a[i3][j3]+a[i3-1][j3]+a[i3+1][j3]+a[i3][j3-1]+a[i3][j3+1]);
                                    }
                                }
                            tmp -= (a[i2][j2]+a[i2-1][j2]+a[i2+1][j2]+a[i2][j2-1]+a[i2][j2+1]);
                            check[i2][j2] = check[i2-1][j2] = check[i2+1][j2] = check[i2][j2-1] = check[i2][j2+1] = false;
                        }
                    }
                tmp -= (a[i1][j1]+a[i1-1][j1]+a[i1+1][j1]+a[i1][j1-1]+a[i1][j1+1]);
                check[i1][j1] = check[i1-1][j1] = check[i1+1][j1] = check[i1][j1-1] = check[i1][j1+1] = false;
            }
        }
    printf("%d", mn);

    return 0;
}