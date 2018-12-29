#include <bits/stdc++.h>

using namespace std;

int a[200001][2];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d %d", &a[i][0], &a[i][1]);
    int pos = 2;
    if(n!=3)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ", pos);
            if(a[pos][1]==a[a[pos][0]][0] || a[pos][1]==a[a[pos][0]][1]) pos = a[pos][0];
            else pos = a[pos][1];
        }
    }
    else printf("1 2 3");

    return 0;
}