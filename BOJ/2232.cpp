#include <bits/stdc++.h>

using namespace std;

bool check[50001];
int a[50001], b[50001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        b[i] = a[i];
    sort(b, b+n);

    return 0;
}