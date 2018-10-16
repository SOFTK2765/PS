#include <bits/stdc++.h>

using namespace std;

bool check[2501][2501] = {};
int rn[2501] = {}, cn[2501] = {};

int main()
{
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    queue<pair<int, pair<int, pair<int, int>>>> qqq;
    for(int i=0;i<q;i++)
    {
        int t, r1, c1, r2, c2;
        scanf(" %d %d %d %d %d", &t, &r1, &c1, &r2, &c2);
        if(t==1)
        {
            check[r1][c1] = true;
            check[r1][c2] = true;
            check[r2][c1] = true;
            check[r2][c2] = true;
            rn[r1] += 2;
        }
        else if(t==2)
        {
            check[r1][c1] = false;
            check[r1][c2] = false;
            check[r2][c1] = false;
            check[r2][c2] = false;
        }
        else if(t==3)
        {
            
        }
    }

    return 0;
}