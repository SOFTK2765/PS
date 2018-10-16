#include <bits/stdc++.h>

using namespace std;

int a[51], b[51];
bool check[51];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        b[i] = a[i];
    }
    sort(b, b+n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i]==b[j] && !check[j])
            {
                check[j] = true;
                printf("%d ", j);
                break;
            }

    return 0;
}