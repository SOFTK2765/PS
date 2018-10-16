#include <bits/stdc++.h>

using namespace std;

char a[10001], b[10001];

int main()
{
    scanf("%s %s", a, b);
    int al = strlen(a), bl = strlen(b), sum = 0;
    for(int i=0;i<al;i++)
        sum += (a[i]-'0');
    long long res = 0;
    for(int i=0;i<bl;i++)
        res += (sum*(b[i]-'0'));
    printf("%lld", res);

    return 0;
}