#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = n, cnt = 0;
    while(tmp)
    {
        tmp /= 10;
        cnt++;
    }
    int res = 0;
    for(int i=0;i<9*cnt;i++)
    {
        int ntmp = n-i, sum = n-i;
        while(ntmp)
        {
            sum += (ntmp%10);
            ntmp /= 10;
        }
        if(sum==n) res = n-i;
    }
    printf("%d", res);

    return 0;
}