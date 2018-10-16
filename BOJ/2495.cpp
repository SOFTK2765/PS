#include <bits/stdc++.h>

using namespace std;

char a[9];

int main()
{
    for(int i=0;i<3;i++)
    {
        scanf(" %s", a);
        char pre = '0';
        int cnt = 0, mx = 0;
        for(int j=0;j<8;j++)
        {
            if(pre==a[j]) cnt++;
            else
            {
                pre = a[j];
                if(mx<cnt) mx = cnt;
                cnt = 1;
            }
            if(j==7 && mx<cnt) mx = cnt;
        }
        printf("%d\n", mx);
    }

    return 0;
}