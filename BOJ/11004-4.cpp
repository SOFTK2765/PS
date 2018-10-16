#include <bits/stdc++.h>

using namespace std;

int a[5000001];

int cmp(void *first, void *second)
{
    if(*(int*)first>*(int*)second) return 1;
    else if(*(int*)first<*(int*)second) return -1;
    else return 0;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    printf("%d", a[k-1]);

    return 0;
}