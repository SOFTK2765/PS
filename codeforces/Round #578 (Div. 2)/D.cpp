#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[2001][2001];
int rcnt[2001], ccnt[2001], tmprcnt[2001], tmpccnt[2001];
bool visit[2001][2001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        for(int j=0;j<n;j++)
            if(a[i][j]=='B')
            {
                rcnt[i]++;
                ccnt[j]++;
            }
    }
    int mx = 0;
    for(int i=0;i<n-k+1;i++)
    {
        for(int j=0;j<k;j++)
            for(int l=0;l<k;l++)
                if(a[i+j][l]=='B')
                {
                    rcnt[i+j]--;
                    ccnt[l]--;
                }
        int cnt = 0;
        for(int j=0;j<n;j++)
        {
            if(rcnt[j]==0) cnt++;
            if(ccnt[j]==0) cnt++;
        }
        mx = max(mx, cnt);
        for(int j=1;j<n-k+1;j++)
        {
            for(int l=0;l<k;l++)
            {
                if(a[i+l][j-1]=='B')
                {
                    rcnt[i+l]++;
                    ccnt[j-1]++;
                }
                if(a[i+l][j+k-1]=='B')
                {
                    rcnt[i+l]--;
                    ccnt[j+k-1]--;
                }
            }
                cnt = 0;
            for(int l=0;l<n;l++)
            {
                if(rcnt[l]==0) cnt++;
                if(ccnt[l]==0) cnt++;
            }
            mx = max(mx, cnt);
        }
        for(int j=i;j<i+k;j++)
            for(int l=n-k;l<n;l++)
                if(a[j][l]=='B')
                {
                    rcnt[j]++;
                    ccnt[l]++;
                }
    }
    printf("%d", mx);

    return 0;
}