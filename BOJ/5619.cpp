#include <bits/stdc++.h>

using namespace std;

int a[10001];
int res[4];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        a[tmp]++;
    }
    int pos = 0;
    for(int i=1;i<10001 && pos<4;i++)
        while(a[i]--) res[pos++] = i;
    if(n==3) printf("%d%d", res[1], res[0]);
    else printf("%d%d", res[0], res[3]);

    return 0;
}