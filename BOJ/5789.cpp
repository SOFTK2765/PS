#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        memset(a, 0, sizeof(a));
        scanf("%s", a);
        int l = strlen(a);
        printf("%s\n", (l%2==1?a[(l/2)-1]==a[(l+1)/2]:a[(l/2)-1]==a[l/2])?"Do-it":"Do-it-Not");
    }

    return 0;
}