#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;;i++)
        for(int j=0;j<k;j++)
            if(i*j==n)
            {
                printf("%d", i*k+j);
                return 0;
            }

    return 0;
}