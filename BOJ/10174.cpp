#include <bits/stdc++.h>

using namespace std;

char a[1000001];

int main()
{
    int n;
    scanf("%d ", &n);
    for(int i=0;i<n;i++)
    {
        memset(a, 0, sizeof(a));
        gets(a);
        int l = strlen(a);
        int j;
        for(j=0;j<l;j++)
            if('A'<=a[j] && a[j]<='Z') a[j]=a[j]-'A'+'a';
        for(j=0;j<l/2;j++)
            if(a[j]!=a[l-1-j]) break;
        printf("%s\n", j==l/2?"Yes":"No");
    }

    return 0;
}