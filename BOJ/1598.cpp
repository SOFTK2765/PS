#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", abs((n-1)/4-(m-1)/4)+abs((n-1)%4-(m-1)%4));

    return 0;
}