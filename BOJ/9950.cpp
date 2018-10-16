#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c==0) break;
        printf("%d %d %d\n", a==0?c/b:a, b==0?c/a:b, c==0?a*b:c);
    }

    return 0;
}