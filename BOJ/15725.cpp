#include <bits/stdc++.h>

using namespace std;

char a[14];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    bool flag = false;
    int ind;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='x')
        {
            flag = true;
            ind = i;
        }
    }
    if(flag)
    {
        if(ind==0) printf("1");
        else if(ind==1 && a[0]=='-') printf("-1");
        else
        {
            for(int i=0;i<ind;i++)
                printf("%c", a[i]);
        }
    }
    else printf("0");

    return 0;
}