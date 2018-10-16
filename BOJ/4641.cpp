#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    while(1)
    {
        int tmp1;
        scanf(" %d", &tmp1);
        if(tmp1==-1) break;
        a[0] = tmp1;
        int ind = 0;
        while(++ind)
        {
            int tmp2;
            scanf(" %d", &tmp2);
            if(tmp2==0) break;
            a[ind] = tmp2;
        }
        sort(a, a+ind);
        int cnt = 0;
        for(int i=0;i<ind;i++)
            for(int j=i+1;j<ind;j++)
                if(a[i]*2==a[j]) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}