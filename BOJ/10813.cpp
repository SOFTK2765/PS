#include <bits/stdc++.h>

using namespace std;

int a[101];

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        a[i] = i+1;
    while(m--)
    {
        int n1, n2;
        scanf(" %d %d", &n1, &n2);
        swap(&a[n1-1], &a[n2-1]);
    }
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}