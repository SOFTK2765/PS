#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    while(1)
    {
        sum += n;
        if(n/m==0) break;
        int tmp = n%m;
        n /= m;
        n += tmp;
    }
    printf("%d", sum);

    return 0;
}