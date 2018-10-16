#include <bits/stdc++.h>

using namespace std;

int a[6];

int main()
{
    for(int i=0;i<5;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<5;i++)
        for(int j=0;j<4-i;j++)
            if(a[j]>a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                for(int k=0;k<5;k++)
                    printf("%d ", a[k]);
                printf("\n");
            }

    return 0;
}