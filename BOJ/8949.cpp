#include <bits/stdc++.h>

using namespace std;

char a[20], b[20];

int main()
{
    scanf("%s %s", a, b);
    int al = strlen(a);
    int bl = strlen(b);
    if(al>bl)
    {
        for(int i=0;i<al-bl;i++)
            printf("%d", a[i]-'0');
        for(int i=al-bl;i<al;i++)
            printf("%d", (a[i]-'0')+(b[i-al+bl]-'0'));
    }
    else if(al<bl)
    {
        for(int i=0;i<bl-al;i++)
            printf("%d", b[i]-'0');
        for(int i=bl-al;i<bl;i++)
            printf("%d", (b[i]-'0')+(a[i-bl+al]-'0'));
    }
    else for(int i=0;i<al;i++)
            printf("%d", (a[i]-'0')+(b[i]-'0'));

    return 0;
}