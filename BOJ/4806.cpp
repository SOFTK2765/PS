#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    char a[10000];
    while(fgets(a, sizeof(a), stdin))
        cnt++;
    printf("%d", cnt);

    return 0;
}