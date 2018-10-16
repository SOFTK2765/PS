#include <bits/stdc++.h>

using namespace std;

struct pp
{
    int n1, n2, s;
};

pp a[101];
int check[101] = {};

bool cmp(const pp &a, const pp &b){return a.s>b.s;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d %d", &a[i].n1, &a[i].n2, &a[i].s);
    sort(a, a+n, cmp);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(check[a[i].n1]<2)
        {
            check[a[i].n1]++;
            printf("%d %d\n", a[i].n1, a[i].n2);
            cnt++;
        }
        if(cnt==3) break;
    }

    return 0;
}