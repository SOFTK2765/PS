#include <bits/stdc++.h>

using namespace std;

const char p[] = {'R', 'G', 'B'};

char a[200001];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    int cnt = 0;
    for(int i=1;i<n;i++)
        if(a[i-1]==a[i])
        {
            cnt++;
            if(a[i]==a[i+1])
            {
                for(int j=0;j<3;j++)
                    if(p[j]==a[i])
                    {
                        a[i] = p[(j+1)%3];
                        break;
                    }
            }
            else
            {
                bool flag[3] = {false, false, false};
                for(int j=0;j<3;j++)
                    if(a[i-1]==p[j] || a[i+1]==p[j]) flag[j] = true;
                for(int j=0;j<3;j++)
                    if(!flag[j]) a[i] = p[j];
            }
        }
    if(a[n-1]==a[n-2])
    {
        cnt++;
        for(int i=0;i<3;i++)
            if(p[i]==a[n-1])
            {
                a[n-1] = p[(i+1)%3];
                break;
            }
    }
    printf("%d\n%s", cnt, a);

    return 0;
}