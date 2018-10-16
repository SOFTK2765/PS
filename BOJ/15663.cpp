#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[9], res[9];
int cnt[10001];

void f(int pos)
{
    if(pos==m)
    {
        for(int i=0;i<m;i++)
            printf("%d ", res[i]);
        printf("\n");
        return;
    }
    int pre = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=pre && cnt[a[i]]!=0)
        {
            res[pos] = a[i];
            cnt[a[i]]--;
            f(pos+1);
            cnt[a[i]]++;
            pre = a[i];
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        cnt[a[i]]++;
    }
    sort(a, a+n);
    f(0);

    return 0;
}