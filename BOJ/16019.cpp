#include <bits/stdc++.h>

using namespace std;

int a[5];

int main()
{
    for(int i=0;i<4;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j) printf("0 ");
            else
            {
                int sum = 0, s = min(i, j), e = max(i, j);
                for(int k=s;k<e;k++)
                    sum += a[k];
                printf("%d ", sum);
            }
        }
        printf("\n");
    }

    return 0;
}