#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int sum = 0;
        for(int i=0;i<10;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(tmp&1) sum += tmp;
        }
        printf("#%d %d\n", tc, sum);
    }

    return 0;
}