#include <bits/stdc++.h>

using namespace std;

int a[3];

int main()
{
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, a+3);
    int cnt = 0;
    while(a[0]+a[1]<=a[2])
    {
        cnt++;
        a[0]++;
    }
    printf("%d", cnt);

    return 0;
}