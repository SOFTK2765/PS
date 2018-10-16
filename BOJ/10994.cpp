#include <bits/stdc++.h>

using namespace std;

int n;

bool a[398][398];

void f(int pos)
{
    if(pos==n)
    {
        for(int i=0;i<4*n-3;i++)
        {
            for(int j=0;j<4*n-3;j++)
                if(a[i][j]) printf("%c", '*');
                else printf(" ");
            printf("\n");
        }
        return;
    }
    if(pos!=0)
    {
        for(int i=0;i<4*pos-3;i++)
            for(int j=4*pos-4;j>=0;j--)
            {
                a[i][j+2] = a[i][j];
                a[i][j] = false;
            }
        for(int i=4*pos-4;i>=0;i--)
            for(int j=2;j<4*pos-1;j++)
            {
                a[i+2][j] = a[i][j];
                a[i][j] = false;
            }
    }
    for(int i=0;i<4*pos+1;i++)
        for(int j=0;j<4*pos+1;j++)
            if(i==0 || i==4*pos || j==0 || j==4*pos) a[i][j] = true;
    f(pos+1);
}

int main()
{
    scanf("%d", &n);
    f(0);

    return 0;
}