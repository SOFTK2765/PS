#include <bits/stdc++.h>

using namespace std;

int n;

int f(int n)
{
    if(n==1) return 1;
    if(n==0) return 0;
    return f(n-1)+f(n-2);
}

int main()
{
    scanf("%d", &n);
    printf("%d", f(n));

    return 0;
}