#include <bits/stdc++.h>

using namespace std;

int t[1001][1001];
char a[1001], b[1001], res[1001];

int main()
{
    scanf("%s %s", a, b);
    int al = strlen(a), bl = strlen(b), pos = 0, mx = 0;
    for(int i=1;i<=al;i++)
    {
        for(int j=1;j<=bl;j++)
        {
            if(a[i-1]==b[j-1])
                t[i][j] = t[i-1][j-1]+1;
            else t[i][j] = t[i-1][j]<t[i][j-1]?t[i][j-1]:t[i-1][j];
            if(mx<t[i][j])
            {
                mx = t[i][j];
                res[pos++] = b[j-1];
            }
        }
    }
    printf("%d\n%s\n", t[al][bl], res);

    return 0;
}