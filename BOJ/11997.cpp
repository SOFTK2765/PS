#include <bits/stdc++.h>

using namespace std;

int a[2001][2001], sum[2001][2001];
int tr[1000001];
int tmp[2001];
pair<int, int> c[1001];

int main()
{
    int n;
    scanf("%d", &n);
    memset(tr, -1, sizeof(tr));
    for(int i=0;i<n;i++)
    {
        scanf(" %d %d", &c[i].first, &c[i].second);
        tmp[i*2] = c[i].first;
        tmp[i*2+1] = c[i].second;
    }
    sort(tmp, tmp+2*n);
    int cnt = 0;
    for(int i=0;i<2*n;i++)
        if(tr[tmp[i]]==-1) tr[tmp[i]] = cnt++;
    for(int i=0;i<n;i++)
        a[tr[c[i].second]][tr[c[i].first]]++;
    for(int i=1;i<=cnt;i++)
        for(int j=1;j<=cnt;j++)
            sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i-1][j-1];
    int mn = 987654321;
    for(int i=0;i<cnt;i++)
        for(int j=0;j<cnt;j++)
            mn = min(mn, max(max(sum[i][j], sum[cnt][j]-sum[i][j]), max(sum[i][cnt]-sum[i][j], sum[cnt][cnt]-sum[i][cnt]-sum[cnt][j]+sum[i][j])));
    printf("%d", mn);

    return 0;
}