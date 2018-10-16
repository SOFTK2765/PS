#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int s = a^b;
    for(int i=0;i<c-1;i++)
        s ^= b;
    printf("%d", s);

    return 0;
}