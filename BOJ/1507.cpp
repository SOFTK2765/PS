#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int a[21][21];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    int sum = 0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k=0;k<n;k++)
            {
                if(k!=i && k!=j && a[i][j]==a[i][k]+a[k][j]) break;
                else if(k!=i && k!=j && a[i][j]>a[i][k]+a[k][j])
                {
                    printf("-1");
                    return 0;
                }
                if(k==n-1) sum += a[i][j];
            }
    printf("%d", sum);

    return 0;
}