#include <bits/stdc++.h>

using namespace std;

char a[26];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]s", a);
        int l = strlen(a), gcnt = 0, bcnt = 0;
        for(int i=0;i<l;i++)
            if(a[i]=='G' || a[i]=='g') gcnt++;
            else if(a[i]=='B' || a[i]=='b') bcnt++;
        printf("%s is %s\n", a, gcnt>bcnt?"GOOD":gcnt<bcnt?"A BADDY":"NEUTRAL");
    }

    return 0;
}