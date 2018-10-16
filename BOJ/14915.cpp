#include <bits/stdc++.h>

using namespace std;

int a[21];

int main()
{
    int m, n, i = 0;
    scanf("%d %d", &m, &n);
    if(m==0)
    {
        printf("%d", 0);
        return 0;
    }
    while(m)
    {
        a[i++] = m%n;
        m /= n;
    }
    while(i--)
    {
        if(a[i]<10) printf("%d", a[i]);
        else printf("%c", a[i]-10+'A');
    }

    return 0;
}