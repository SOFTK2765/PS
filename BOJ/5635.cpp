#include <bits/stdc++.h>

using namespace std;

struct p
{
    char name[16];
    int dd, mm, yyyy;
};

p a[101];

bool cmp(const p &a, const p &b)
{
    if(a.yyyy!=b.yyyy) return a.yyyy>b.yyyy;
    if(a.mm!=b.mm) return a.mm>b.mm;
    return a.dd>b.dd;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s %d %d %d", a[i].name, &a[i].dd, &a[i].mm, &a[i].yyyy);
    sort(a, a+n, cmp);
    printf("%s\n%s", a[0].name, a[n-1].name);

    return 0;
}