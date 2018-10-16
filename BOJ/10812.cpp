#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        a[i+1] = i+1;
    while(m--)
    {
        int i, j, k;
        scanf(" %d %d %d", &i, &j, &k);
        int s = a[k];
        while(a[i]!=s)
        {
            int tmp = a[i];
            for(int l=i;l<j;l++)
                a[l] = a[l+1];
            a[j] = tmp;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ", a[i+1]);

    return 0;
}