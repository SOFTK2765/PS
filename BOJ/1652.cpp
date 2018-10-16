#include <bits/stdc++.h>

using namespace std;

char a[101][101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int tcnt = 0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='.') tcnt++;
            else tcnt = 0;
            if(tcnt==2) cnt++;
        }
    }
    printf("%d ", cnt);
    cnt = 0;
    for(int i=0;i<n;i++)
    {
        int tcnt = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='.') tcnt++;
            else tcnt = 0;
            if(tcnt==2) cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}