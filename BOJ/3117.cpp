#include <bits/stdc++.h>

using namespace std;

int a[100001];
int s_table[100001][31];

int main()
{
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<=k;i++)
        scanf(" %d", &s_table[i][0]);
    for(int i=1;i<=30;i++)
        for(int j=1;j<=k;j++)
            s_table[j][i] = s_table[s_table[j][i-1]][i-1];
    for(int i=0;i<n;i++)
    {
        int pos = 0, tmpt = m-1, res = a[i];
        while(tmpt)
        {
            if(tmpt%2) res = s_table[res][pos];
            pos++;
            tmpt >>= 1;
        }
        printf("%d ", res);
    }

    return 0;
}