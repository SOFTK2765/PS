#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, d, an;
    scanf("%d %d %d", &a, &d, &an);
    if((an-a)%d==0 && (an-a)/d>=0) printf("%d", (an-a)/d+1);
    else printf("X");

    return 0;
}