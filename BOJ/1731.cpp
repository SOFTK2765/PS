#include <bits/stdc++.h>

using namespace std;

int a[51];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    if(a[1]-a[0]==a[2]-a[1]) printf("%d", a[0]+(a[1]-a[0])*n);
    else printf("%d", a[0]*(int)pow((a[1]/a[0]), n));

    return 0;
}