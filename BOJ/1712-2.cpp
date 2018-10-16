#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res;
    if(c-b<=0) res = -1;
    else res = a/(c-b)+1;
    printf("%d", res);

    return 0;
}