#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int ang;
        scanf(" %d", &ang);
        bool flag = false;
        for(int i=3;i<=360;i++)
        {
            double tmp = (double)180/i;
            for(int j=1;j<=i-2;j++)
            {
                if(ang==tmp*j)
                {
                    flag = true;
                    printf("%d\n", i);
                    break;
                }
            }
            if(flag) break;
        }
    }

    return 0;
}