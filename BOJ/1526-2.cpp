#include <bits/stdc++.h>

using namespace std;

int n;

int f(int num)
{
    if(n<num) return num/10;
    return max(f(num*10+4), f(num*10+7));
}

int main()
{
    scanf("%d", &n);
    printf("%d", f(0));

    return 0;
}