#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%c", (i+j)%2==0?'*':'.');
        printf("\n");
    }

    return 0;
}