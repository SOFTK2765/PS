#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char a[21];
        scanf("%s", a);
        int l = strlen(a);
        for(int i=0;i<l;i++)
            if('A'<=a[i] && a[i]<='Z') a[i] -= ('A'-'a');
        printf("%s\n", a);
    }

    return 0;
}