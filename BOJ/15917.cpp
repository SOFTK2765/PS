#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    for(int i=0;i<q;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        bool flag = true;
        while(tmp>1)
        {
            if(tmp%2!=0)
            {
                flag = false;
                break;
            }
            tmp /= 2;
        }
        printf("%d\n", flag?1:0);
    }

    return 0;
}