#include <bits/stdc++.h>

using namespace std;

int a[300001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int si;
    for(int i=0;i<n;i++)
        if(a[i]==n)
        {
            si = i;
            break;
        }
    int target = n-1;
    for(int i=si;i>=0;i--)
        if(a[i]==target) target--;
    printf("%d", target);

    return 0;
}