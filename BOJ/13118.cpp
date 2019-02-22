#include <bits/stdc++.h>

using namespace std;

int p[4];

int main()
{
    int x, y, r;
    for(int i=0;i<4;i++)
        scanf(" %d", &p[i]);
    scanf(" %d %d %d", &x, &y, &r);
    for(int i=0;i<4;i++)
    {
        if(p[i]==x)
        {
            printf("%d", i+1);
            break;
        }
        if(i==3) printf("0");
    }

    return 0;
}