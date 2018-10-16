#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char a[62];
        scanf("%s", a);
        int l = strlen(a);
        if((a[l-1]-'0')%2==1) printf("odd\n");
        else printf("even\n");
    }

    return 0;
}