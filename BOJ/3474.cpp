#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int num, tmp = 1;
        long long sum = 0;
        int two = 0, five = 0;
        scanf("%d", &num);
        while(1)
        {
            tmp *= 5;
            if(num/tmp==0) break;
            sum += num/tmp;
        }
        printf("%lld\n", sum);
    }
    return 0;
}