#include <bits/stdc++.h>

using namespace std;

int a[1001] = {};

int main()
{
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);
    int pos = 1, cnt = 0;
    while(1)
    {
        cnt++;
        a[pos]++;
        if(a[pos]==m) break;
        pos = ((a[pos]%2==1?pos+l:pos-l)+n-1)%n+1;
    }
    printf("%d", cnt-1);

    return 0;
}