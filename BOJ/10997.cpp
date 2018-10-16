#include <bits/stdc++.h>

using namespace std;

bool a[400][398];
int n;

void f(int pos)
{
    if(pos==n)
    {
        for(int i=0;i<4*n-1;i++)
        {
            for(int j=0;j<4*n-3;j++)
                if(a[i][j]) printf("%c", '*');
                else if(i!=1) printf(" ");
            printf("\n");
        }
        return;
    }
    if(pos!=0)
    {
        for(int i=0;i<4*pos-1;i++)
            for(int j=4*pos-4;j>=0;j--)
            {
                a[i][j+2] = a[i][j];
                a[i][j] = false;
            }
        for(int i=4*pos-2;i>=0;i--)
            for(int j=2;j<4*pos-1;j++)
            {
                a[i+2][j] = a[i][j];
                a[i][j] = false;
            }
        for(int i=0;i<4*pos+3;i++)
            for(int j=0;j<4*pos+1;j++)
                if(i==0 || i==4*pos+2 || j==0 || (j==4*pos && i!=1) || (i==2 && j==4*pos-1)) a[i][j] = true;
    }
    else a[0][0] = a[1][0] = a[2][0] = true;
    f(pos+1);
}

int main()
{
    scanf("%d", &n);
    if(n==1) printf("*");
    else f(0);

    return 0;
}