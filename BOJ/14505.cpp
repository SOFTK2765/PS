#include <bits/stdc++.h>

using namespace std;

char a[31];
char s[31];
int cnt = 0;

void f(int pos)
{
    if(pos==m)
    {
        if(m%2==1)
        {
            for(int i=0;i<m/2+1;i++)
            {
                if(s[m/2-i]!=s[m/2+i]) break;
                if(i==m/2) cnt++;
            }
        }
        else
        {
            for(int i=0;i<m/2;i++)
            {
                if(s[m/2-i-1]!=s[m/2+i]) break;
                if(i==m/2-1) cnt++;
            }
        }
        return;
    }
    for(int i=0;i<l;i++)
}

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
    {
        int d = 0;
        while(i-d>=0 && i+d<l)
        {
            if(a[i-d]==a[i+d]) cnt++;
            if(i-d-1>=0 && a[i-d-1]==a[i+d]) cnt++;
            else break;
            d++;
        }
    }
    printf("%d", cnt);

    return 0;
}