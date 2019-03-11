#include <bits/stdc++.h>

using namespace std;

int a[5];

int main()
{
    for(int i=0;i<5;i++)
        scanf(" %d", &a[i]);
    sort(a, a+5);
    int cnt = 0;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<4;j++)
            for(int k=j+1;k<5;k++)
                if(a[i]+a[j]>a[k]) cnt++;
    printf("%d", cnt);

    return 0;
}