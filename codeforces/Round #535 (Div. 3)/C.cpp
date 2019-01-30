#include <bits/stdc++.h>

using namespace std;

const char p[][3] = {{'R', 'G', 'B'}, {'R', 'B', 'G'}, {'B', 'R', 'G'}, {'B', 'G', 'R'}, {'G', 'R', 'B'}, {'G', 'B', 'R'}};

char a[200001];
int cnt[6];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    for(int i=0;i<6;i++)
    {
        int pos = 0;
        for(int j=0;j<n;j++)
            if(a[j]!=p[i][(pos++)%3]) cnt[i]++;
    }
    int mn = 987654321;
    for(int i=0;i<6;i++)
        mn = min(mn, cnt[i]);
    int pos = 0;
    for(int i=0;i<6;i++)
        if(mn==cnt[i])
        {
            printf("%d\n", mn);
            for(int j=0;j<n;j++)
                printf("%c", p[i][(pos++)%3]);
            break;
        }

    return 0;
}