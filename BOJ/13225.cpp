#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    scanf("%d", &c);
    for(int i=0;i<c;i++)
    {
        int n;
        scanf(" %d", &n);
        int cnt = 0;
        for(int j=1;j<=n;j++)
            if(n%j==0) cnt++;
        printf("%d %d\n", n, cnt);
    }

    return 0;
}