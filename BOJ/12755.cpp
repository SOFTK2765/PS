#include <bits/stdc++.h>

using namespace std;

const long long mem[] = {0, 9, 180, 2700, 36000, 450000, 5400000, 63000000, 720000000, 8100000000};

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = 0, cnt = 0, tsum = 0;
    while(n>tsum) tsum += mem[cnt++];
    tsum -= mem[--cnt];
    int pos = (int)pow(10, cnt-1)-1;
    for(int i=0;i<n-tsum;i+=cnt)
        pos++;
    printf("%c", to_string(pos)[(n-tsum-1)%cnt]);

    return 0;
}