#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tmp;
    int sum1 = 0, sum2 = 0;
    for(int i=0;i<4;i++)
    {
        scanf("%d", &tmp);
        sum1 += tmp;
    }
    for(int i=0;i<4;i++)
    {
        scanf("%d", &tmp);
        sum2 += tmp;
    }
    printf("%d", sum1>sum2?sum1:sum2);
    
    return 0;
}