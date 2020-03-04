#include <bits/stdc++.h>

using namespace std;

int n, m, h;
bool check[31][11];
int tcnt;
bool flag;

void f(int pos, int nx, int ny)
{
    if(pos==tcnt)
    {
        bool tmpflag = false;
        for(int i=1;i<=n;i++)
        {
            int posx = i;
            for(int posy=0;posy<=h;posy++)
            {
                if(check[posy][posx-1]) posx--;
                else if(check[posy][posx]) posx++;
            }
            if(posx!=i)
            {
                tmpflag = true;
                break;
            }
        }
        if(!tmpflag)
        {
            flag = true;
            printf("%d", tcnt);
        }
        return;
    }
    if(nx==n)
    {
        nx = 1;
        ny++;
    }
    for(int i=ny;!flag && i<=h;i++)
        for(int j=(i==ny)?nx:1;!flag && j<n;j++)
            if(!check[i][j] && (j-1<1 || !check[i][j-1]) && (j+1>=n || !check[i][j+1]))
            {
                check[i][j] = true;
                f(pos+1, j+1, i);
                check[i][j] = false;
            }
}

int main()
{
    scanf("%d %d %d", &n, &m, &h);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        check[tmp1][tmp2] = true;
    }
    for(tcnt=0;!flag && tcnt<=3;tcnt++)
        f(0, 1, 1);
    if(!flag) printf("-1");

    return 0;
}