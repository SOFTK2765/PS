#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    scanf("%d", &k);
    int a = 0, b = 1, tmp = 0;
    for(int i=1;i<k;i++)
    {
        tmp = a;
        a = b;
        b = tmp + a;
    }
    printf("%d %d", a, b);

    return 0;
}