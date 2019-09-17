#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=1;;i++)
        for(int j=1;j<=i;j++)
            if(++cnt==n)
            {
                printf("%d %d\n", i-j+1, j);
                return 0;
            }

    return 0;
}