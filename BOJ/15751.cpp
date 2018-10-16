#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    printf("%d", min(abs(a-b), min(abs(a-x)+abs(b-y), abs(a-y)+abs(b-x))));

    return 0;
}