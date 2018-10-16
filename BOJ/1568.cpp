#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    while(n>0)
    {
        for(int i=1;;i++)
        {
            if(n<(i*i+i)/2)
            {
                i--;
                n -= ((i*i+i)/2);
                cnt += i;
                break;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}