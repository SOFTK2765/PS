#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, cnt = 0;
    while(scanf(" %d", &a)!=EOF)
        if(a>0) cnt++;
    printf("%d", cnt);

    return 0;
}