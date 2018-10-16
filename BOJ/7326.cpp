#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int x, y;
        scanf(" %d %d", &x, &y);
        if(!(x==y || x==y+2))
        {
            printf("No Number\n");
            continue;
        }
        if(x==y)
            if((x+y)%4==0) printf("%d\n", x+y);
            else printf("%d\n", x+y-1);
        else
            if((x+y)%4==2) printf("%d\n", x+y);
            else printf("%d\n", x+y-1);
    }

    return 0;
}