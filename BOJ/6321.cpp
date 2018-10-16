#include <bits/stdc++.h>

using namespace std;

char a[51];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s", a);
        printf("String #%d\n", i);
        int l = strlen(a);
        for(int j=0;j<l;j++)
            printf("%c", (('A'+a[j]+1)%26)+'A');
        printf("\n\n");
    }

    return 0;
}