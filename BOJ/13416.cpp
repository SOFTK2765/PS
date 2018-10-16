#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        int tmp, sum = 0;
        for(int i=0;i<n;i++)
        {
            int max = 0;
            for(int j=0;j<3;j++)
            {
                scanf(" %d", &tmp);
                if(max<tmp) max = tmp;
            }
            sum += max;
        }
        printf("%d\n", sum);
    }

    return 0;
}