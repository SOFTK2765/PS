#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    while(n%5!=0)
    {
        n -= 2;
        cnt++;
    }
    cnt += (n/5);
    printf("%d", cnt);

    return 0;
}