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
            sum += tmp;
        }
        printf("#%d %d\n", tc, (int)(1.0*sum/10+0.5));
    }

    return 0;
}