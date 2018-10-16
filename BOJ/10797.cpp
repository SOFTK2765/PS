#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=0;i<5;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(n==tmp) cnt++;
    }
    printf("%d", cnt);

    return 0;
}