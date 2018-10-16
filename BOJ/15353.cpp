#include <bits/stdc++.h>

using namespace std;

char a[10002];
char b[10002];
char res[10002];

int main()
{
    scanf("%s %s", a, b);
    int al = strlen(a);
    int bl = strlen(b);
    if(al<bl)
    {
        for(int i=bl-1;i>=0;i--)
            b[i+1] = b[i];
        b[0] = '0';
        for(int i=al-1;i>=0;i--)
            a[bl-al+i+1] = a[i];
        for(int i=0;i<=bl-al;i++)
            a[i] = '0';
        int pre = 0;

    }
    else
    {
        for(int i=al-1;i>=0;i--)
            a[i+1] = a[i];
        a[0] = '0';
        for(int i=bl-1;i>=0;i--)
            b[al-bl+i+1] = b[i];
        for(int i=0;i<=al-bl;i++)
            b[i] = '0';
        bl = al;
    }
    int pre = 0;
    int rl = strlen(a);
    for(int i=bl;i>=0;i--)
    {
        res[i] = (((a[i]-'0')+(b[i]-'0')+pre)%10)+'0';
        pre = (((a[i]-'0')+(b[i]-'0')+pre)/10);
    }
    if('1'<=res[0] && res[0]<='9') printf("%s", res);
    else printf("%s", res+1);
    return 0;
}