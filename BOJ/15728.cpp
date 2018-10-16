#include <bits/stdc++.h>

using namespace std;

int a[101], b[101];
bool check[10001];

typedef struct node
{
    int mul, a, b, ind;
}node;

node res[10001];

bool cmp(const node &a, const node &b){return a.mul<b.mul;}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        scanf(" %d", &b[i]);
    sort(a, a+n);
    sort(b, b+n);
    int tmp, pos = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            res[pos].a = a[i];
            res[pos].b = b[j];
            res[pos].ind = j;
            res[pos++].mul = a[i]*b[j];
        }
    sort(res, res+pos, cmp);
    int respos = pos-1;
    while(k--)
    {
        check[res[respos].ind] = true;
        while(check[res[--respos].ind]);
    }
    printf("%d\n", res[respos].mul);

    return 0;
}