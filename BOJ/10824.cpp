#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[10], b[10], c[10], d[10];
    scanf("%s %s %s %s", a, b, c, d);
    int bl = strlen(b);
    int dl = strlen(d);
    long long la = atoi(a)*pow(10, bl);
    long long lc = atoi(c)*pow(10, dl);
    printf("%lld", la+atoi(b)+lc+atoi(d));

    return 0;
}