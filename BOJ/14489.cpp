#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a+b-2*c>=0?a+b-2*c:a+b);

    return 0;
}