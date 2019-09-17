#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    while(1)
    {
        int tmp = a, sum = 0;
        while(tmp)
        {
            sum += tmp%10;
            tmp /= 10;
        }
        if(sum%4==0)
        {
            printf("%d", a);
            break;
        }
        a++;
    }

    return 0;
}