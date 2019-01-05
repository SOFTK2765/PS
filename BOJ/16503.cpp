#include <bits/stdc++.h>

using namespace std;

int f(int a, char o, int b)
{
    if(o=='+') return a+b;
    if(o=='-') return a-b;
    if(o=='*') return a*b;
    if(o=='/') return a/b;
}

int main()
{
    int k1, k2, k3;
    char o1, o2;
    scanf("%d %c %d %c %d", &k1, &o1, &k2, &o2, &k3);
    int res1, res2;
    res1 = f(f(k1, o1, k2), o2, k3);
    res2 = f(k1, o1, f(k2, o2, k3));
    printf("%d\n%d", min(res1, res2), max(res1, res2));

    return 0;
}