#include <bits/stdc++.h>

using namespace std;

int a[21][21];
int n, mx;

void f(int pos)
{
    if(pos==5)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mx = max(mx, a[i][j]);
        return;
    }
    //상
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[j][i]
    //하
    //좌
    //우

}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);


    return 0;
}