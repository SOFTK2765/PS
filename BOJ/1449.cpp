#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    int pos = 0, cnt = 0;
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    for(int i=0;i<n;i++)
        if(pos<a[i])
        {
            cnt++;
            pos = a[i]+l-1;
        }
    printf("%d", cnt);

    return 0;
}