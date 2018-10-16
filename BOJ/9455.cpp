#include <bits/stdc++.h>

using namespace std;

int a[101][101] = {};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                int tmp;
                scanf("%d", &tmp);
                a[i][j] = tmp==1?true:false;
            }
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int cnt = 0;
            for(int j=0;j<m;j++)
            {
                if(a[j][i]==true) cnt++;
                else sum += cnt;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}