#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tmp, sum = 0;
    while(~scanf("%1d", &tmp))
    {
        if(tmp==0) tmp = 9;
        sum += tmp;
    }
    printf("%d", sum);

    return 0;
}