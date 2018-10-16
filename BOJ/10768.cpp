#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<2) printf("Before");
    else if(a>2) printf("After");
    else
    {
        if(b<18) printf("Before");
        else if(b>18) printf("After");
        else printf("Special");
    }

    return 0;
}