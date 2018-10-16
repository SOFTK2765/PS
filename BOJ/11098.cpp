#include <bits/stdc++.h>

using namespace std;

struct player
{
    int money;
    char name[21];
};

player a[101];

bool cmp(const player &a, const player &b){return a.money<b.money;}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int p;
        scanf(" %d", &p);
        for(int i=0;i<p;i++)
            scanf(" %d %s", &a[i].money, a[i].name);
        sort(a, a+p, cmp);
        printf("%s\n", a[p-1].name);
    }

    return 0;
}