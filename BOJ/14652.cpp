#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int rn = k/m;
    int rm = k-(rn*m);
    printf("%d %d", rn, rm);

    return 0;
}