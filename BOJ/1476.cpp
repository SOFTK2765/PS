#include <bits/stdc++.h>

using namespace std;

int main()
{
    int e, s, m;
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &e, &s, &m);
    int i;
    for(i=0;;i++)
        if(1+i%15==e && 1+i%28==s && 1+i%19==m) break;
    printf("%d", i+1);

    return 0;
}