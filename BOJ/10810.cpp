#include <bits/stdc++.h>

using namespace std;

int a[101] = {};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    while(m--)
    {
        int i, j, k;
        scanf(" %d %d %d", &i, &j, &k);
        for(int l=i-1;l<j;l++)
            a[l] = k;
    }
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}