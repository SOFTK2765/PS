#include <bits/stdc++.h>

using namespace std;

int s_table[200001][19];

int main()
{
    int m;
    scanf("%d", &m);
    for(int i=1;i<=m;i++)
        scanf(" %d", &s_table[i][0]);
    for(int i=1;i<=18;i++)
        for(int j=1;j<=m;j++)
            s_table[j][i] = s_table[s_table[j][i-1]][i-1];
    int q;
    scanf(" %d", &q);
    while(q--)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        int pos = 0;
        while(tmp1)
        {
            if(tmp1%2) tmp2 = s_table[tmp2][pos];
            pos++;
            tmp1 >>= 1;
        }
        printf("%d\n", tmp2);
    }

    return 0;
}