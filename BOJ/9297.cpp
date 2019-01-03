#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        printf("Case %d: ", tc);
        int a, b;
        scanf("%d %d", &a, &b);
        if(b==0)
        {
            printf("I\n");
            continue;
        }
        if(a==0)
        {
            printf("0\n");
            continue;
        }
        if(a/b>0) printf("%d ", a/b);
        if(a%b!=0) printf("%d/%d\n", a%b, b);
        else printf("\n");
    }

    return 0;
}