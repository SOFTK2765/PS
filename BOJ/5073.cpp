#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a[3];
        for(int i=0;i<3;i++)
            scanf(" %d", &a[i]);
        if(a[0]+a[1]+a[2]==0) break;
        sort(a, a+3);
        int cnt = 0;
        for(int i=0;i<2;i++)
            if(a[i]==a[i+1]) cnt++;
        if(a[0]+a[1]<=a[2])
        {
            printf("Invalid\n");
            continue;
        }
        cnt==0?printf("Scalene\n"):(cnt==1?printf("Isosceles\n"):printf("Equilateral\n"));
    }

    return 0;
}