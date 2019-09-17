#include <bits/stdc++.h>

using namespace std;

int a[5];

int main()
{
    for(int i=0;i<5;i++)
        scanf("%d ", &a[i]);
    int n = 1;
    while(n++)
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            for(int k=j+1;k<5;k++)
                if(!(n%a[i]+n%a[j]+n%a[k]))
                {
                    printf("%d", n);
                    return 0;
                }

    return 0;
}