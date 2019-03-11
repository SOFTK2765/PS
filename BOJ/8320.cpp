#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=1;i*i<=n;i++)
        for(int j=i;j*i<=n;j++)
            cnt++;
    printf("%d", cnt);

    return 0;
}