#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld", n+(n+1)*((long long)pow(2, (n+1))-1));

    return 0;
}