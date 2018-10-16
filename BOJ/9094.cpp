#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int cnt = 0;
        for(int i=2;i<n;i++)
            for(int j=1;j<i;j++)
                if(((float)i*i+j*j+m)/(i*j)==(i*i+j*j+m)/(i*j)) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}