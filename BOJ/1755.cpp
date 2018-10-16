#include <bits/stdc++.h>

using namespace std;

string trans[10] = {"ze", "on", "tw", "th", "fo", "fi", "si", "se", "ei", "ni"};
char a[100][3];

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int pos = 0;
    for(int i=m;i<=n;i++)
    {
        int tmp = i;
        while(tmp>0)
        {
            s[i] += [tmp%10]
        }
        strcpy(a[pos++], )
    }
    for(int i=0;i<pos;i++)
        printf("%d ", a[i]);
    printf("\n");
    sort(a, a+pos);
    for(int i=0;i<pos;i++)
    {
        printf("%d ", revtrans[a[i]/10]*10+revtrans[a[i]%10]);
        if(i%10==9) printf("\n");
    }

    return 0;
}