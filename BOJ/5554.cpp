#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, sum = 0;
    for(int i=0;i<4;i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d\n%d", sum/60, sum%60);

    return 0;
}