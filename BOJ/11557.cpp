#include <bits/stdc++.h>

using namespace std;

struct school
{
    char name[21];
    int l;
};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int max = 0;
        char maxn[21];
        while(n--)
        {
            school a;
            scanf("%s %d", a.name, &a.l);
            if(max<a.l)
            {
                max = a.l;
                memset(maxn, 0, sizeof(maxn));
                strcpy(maxn, a.name);
            }
        }
        printf("%s\n", maxn);
    }

    return 0;
}