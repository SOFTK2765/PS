#include <bits/stdc++.h>

using namespace std;



int n;
char a[101][101];

void rev1()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<=(n-1)/2;j++)
        {
            char tmp = a[i][j];
            a[i][j] = a[i][n-1-j];
            a[i][n-1-j] = tmp;
        }

        return;
}

void rev2()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<=(n-1)/2;j++)
        {
            char tmp = a[j][i];
            a[j][i] = a[n-1-j][i];
            a[n-1-j][i] = tmp;
        }

        return;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    int k;
    scanf("%d", &k);
    if(k==2) rev1();
    else if(k==3) rev2();
    for(int i=0;i<n;i++)
        printf("%s\n", a[i]);

    return 0;
}