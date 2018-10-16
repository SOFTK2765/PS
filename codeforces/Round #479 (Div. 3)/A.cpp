#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    while(k--)
    {
        if(n%10!=0) n--;
        else n /= 10;
    }
    printf("%d", n);

    return 0;
}