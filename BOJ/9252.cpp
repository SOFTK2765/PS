#include <bits/stdc++.h>

using namespace std;

int t[1001][1001];
char a[1001], b[1001], res[1001];
pair<int, int> rt[1001][1001];

int main()
{
    scanf("%s %s", a, b);
    int al = strlen(a), bl = strlen(b);
    for(int i=1;i<=al;i++)
        for(int j=1;j<=bl;j++)
            if(a[i-1]==b[j-1])
            {
                t[i][j] = t[i-1][j-1]+1;
                rt[i][j].first = j-1;
                rt[i][j].second = i-1;
            }
            else
            {
                if(t[i-1][j]<t[i][j-1])
                {
                    t[i][j] = t[i][j-1];
                    rt[i][j].first = j-1;
                    rt[i][j].second = i;
                 }
                else
                {
                    t[i][j] = t[i-1][j];
                    rt[i][j].first = j;
                    rt[i][j].second = i-1;
                }
            }
    printf("%d\n", t[al][bl]);
    int posx = bl, posy = al, tmp = t[al][bl], pos = tmp-1;
    while(tmp)
    {
        while(t[rt[posy][posx].second][rt[posy][posx].first]==tmp)
        {
            int tmpx = posx, tmpy = posy;
            posx = rt[tmpy][tmpx].first;
            posy = rt[tmpy][tmpx].second;
        }
        res[pos--] = a[posy-1];
        tmp--;
    }
    printf("%s", res);

    return 0;
}