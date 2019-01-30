#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[301], b[301];
int res[301];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i].first);
        a[i].second = i;
        b[i].first = a[i].first;
        b[i].second = a[i].second;
    }
    sort(a, a+n);
    int pos = 0;
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        for(int j=0;j<n && a[j].first==a[0].first;j++)
        {
            if(tmp1-1<=a[j].second && a[j].second<=tmp2-1)
            {
                for(int k=0;k<n;k++)
                    if(tmp1-1<=a[k].second && a[k].second<=tmp2-1)
                    {
                        a[k].first--;
                    }
                sort(a, a+n);
                res[pos++] = i+1;
                break;
            }
        }
    }
    printf("%d\n%d\n", a[n-1].first-a[0].first, pos);
    for(int i=0;i<pos;i++)
        printf("%d ", res[i]);

    return 0;
}