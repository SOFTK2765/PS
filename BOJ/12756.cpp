#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, b1, b2;
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
    printf("%s", (a2-1)/b1>(b2-1)/a1?"PLAYER A":(a2-1)/b1<(b2-1)/a1?"PLAYER B":"DRAW");

    return 0;
}