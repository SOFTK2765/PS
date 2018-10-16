#include <bits/stdc++.h>

using namespace std;

bool a[1024][2046];
int n;

void f(int pos, int prex, int prey)
{
    if(pos==n)
    {
        for(int i=0;i<prey;i++)
        {
            if(n%2==1)
            {
                for(int j=0;j<prex/2+1+i;j++)
                    if(a[i][j]) printf("%c", '*');
                    else printf(" ");
            }
            else
            {
                for(int j=0;j<prex-i;j++)
                    if(a[i][j]) printf("%c", '*');
                    else printf(" ");
            }
            printf("\n");
        }
        return;
    }
    if(pos!=0)
    {
        int movingx = pow(2, pos);
        int movingy = pos%2==1?1:prey;
        int limxi = prey;
        int limxj = prex-1;
        int limyi = prey-1;
        int limyj = prex+movingx;
        for(int i=0;i<limxi;i++)
            for(int j=limxj;j>=0;j--)
            {
                a[i][j+movingx] = a[i][j];
                a[i][j] = false;
            }
        for(int i=limyi;i>=0;i--)
            for(int j=movingx;j<limyj+movingx;j++)
            {
                a[i+movingy][j] = a[i][j];
                a[i][j] = false;
            }
    }
    if(pos%2==0)
    {
        int liti = (prey+1)*2-1;
        for(int i=0;i<liti;i++)
            for(int j=0;j<2*liti-1;j++)
            {
                if(i==liti-1) a[i][j] = true;
                else if(j==(2*liti-1)/2+i || j==(2*liti-1)/2-i) a[i][j] = true;
                else if(j>(2*liti-1)/2+i || j<(2*liti-1)/2-i || (!a[i][j] && j<(2*liti-1)/2+i) || (!a[i][j] && j>(2*liti-1)/2-i)) a[i][j] = false;
            }
    }
    else
    {
        int liti = (prey+1)*2-1;
        for(int i=0;i<liti;i++)
            for(int j=0;j<2*liti-1;j++)
                {
                    if(i==0) a[i][j] = 1;
                    else if(j==(2*liti-1)/2+(liti-1-i) || j==(2*liti-1)/2-(liti-1-i)) a[i][j] = 1;
                    else if(j>(2*liti-1)/2+(liti-1-i) || j<(2*liti-1)/2-(liti-1-i) || (!a[i][j] && j<(2*liti-1)/2+(liti-1-i)) || (!a[i][j] && j>(2*liti-1)/2-(liti-1-i))) a[i][j] = 0;
                }
    }
    if(pos==0) f(pos+1, 1, 1);
    else f(pos+1, (prex+1)*2+1, (prey+1)*2-1);
}

int main()
{
    scanf("%d", &n);
    f(0, 0, 0);

    return 0;
}