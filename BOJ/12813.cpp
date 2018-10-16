#include <bits/stdc++.h>

using namespace std;

char a[100001], b[100001];

int main()
{
    scanf("%s %s", a, b);
    int l = strlen(a);
    for(int i=0;i<l;i++)
        printf("%d", (a[i]-'0')&(b[i]-'0'));
    printf("\n");
    for(int i=0;i<l;i++)
        printf("%d", (a[i]-'0')|(b[i]-'0'));
    printf("\n");
    for(int i=0;i<l;i++)
        printf("%d", (a[i]-'0')^(b[i]-'0'));
    printf("\n");
    for(int i=0;i<l;i++)
        printf("%d", a[i]-'0'==0?1:0);
    printf("\n");
    for(int i=0;i<l;i++)
        printf("%d", b[i]-'0'==0?1:0);

    return 0;
}