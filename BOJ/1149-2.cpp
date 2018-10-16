#include <bits/stdc++.h>

using namespace std;

struct info
{
    int p, c;
};

bool cmp(const info &a, const info &b){return a.p<b.p;}

info a[1000][3];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
        {
            scanf(" %d", &a[i][j].p);
            a[i][j].c = j;
        }
    sort(a[0], a[0]+3, cmp);
    int sum = a[0][0].p, si = 0;
    for(int i=1;i<n;i++)
    {
        sort(a[i], a[i]+3, cmp);
        for(int j=0;j<3;j++)
            if(a[i][j].c!=a[i-1][si].c)
            {
                if(si!=2 && a[i][j].p-a[i][0].p>a[i-1][si+1].p-a[i-1][si].p)
                {
                    sum -= a[i-1][si].p;
                    sum += a[i-1][si+1].p;
                    sum += a[i][0].p;
                    si = 0;
                }
                else
                {
                    sum += a[i][j].p;
                    si = j;
                }
                break;
            }
    }
    printf("%d", sum);

    return 0;
}