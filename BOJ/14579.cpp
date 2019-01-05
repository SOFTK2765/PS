#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = 1;
    for(int i=a;i<=b;i++)
        res = (res*(i*(i+1)/2)%14579)%14579;
    printf("%d", res);

    return 0;
}