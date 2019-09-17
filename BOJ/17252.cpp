#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    bool flag = true;
    if(n==0) flag = false;
    while(n)
    {
        if(n%3==2) flag = false;
        n /= 3;
    }
    printf("%s", flag?"YES":"NO");

    return 0;
}