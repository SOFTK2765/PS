#include <bits/stdc++.h>

using namespace std;

int a[301][301], b[301][301];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &b[i][j]);
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            bool flag = false;
            for(int k=0;k<n;k++)
                if(a[i][k]&b[k][j]) flag = true;
            if(flag) cnt++;
        }
    printf("%d", cnt);

    return 0;
}