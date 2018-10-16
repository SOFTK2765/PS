#include <bits/stdc++.h>

using namespace std;

char a[11][11];
char b[11][22];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    for(int i=0;i<n;i++)
        scanf("%s", b[i]);
    int s = 0;
    for(int i=0;i<n;i++)
    {
        int l = strlen(a[i]);
        for(int j=0;j<l;j++)
        {
            if(b[i][2*j]!=a[i][j] || b[i][2*j+1]!=a[i][j])
            {
                s = 0;
                break;
            }
            if(j==l-1) s = 1;
        }
        if(s==0) break;
    }
    if(s==0) printf("Not Eyfa");
    else printf("Eyfa");

    return 0;
}