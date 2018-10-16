#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=0;i<2*n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += abs(tmp);
    }
    printf("%d", sum);

    return 0;
}