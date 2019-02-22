#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    int tmp = 0;
    while(++tmp)
    {
        if(tmp+(tmp+1)*((long long)pow(2, tmp+1)-1)>=n)
        {
            printf("%d", tmp);
            break;
        }
    }

    return 0;
}