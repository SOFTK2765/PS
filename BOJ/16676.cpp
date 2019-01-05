#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = 11, cnt = 0;
    while(++cnt)
    {
        if(n<tmp) break;
        tmp *= 10;
        tmp += 1;
    }
    printf("%d", cnt);

    return 0;
}