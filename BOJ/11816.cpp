#include <bits/stdc++.h>

using namespace std;

char a[10];

int main()
{
    scanf("%s", a);
    if(a[0]!='0') printf("%d", atoi(a));
    else
    {
        int l = strlen(a);
        int sum = 0;
        if(a[1]=='x')
        {
            for(int i=2;i<l;i++)
            {
                sum *= 16;
                sum += ((a[i]>='0' && a[i]<='9')?(a[i]-'0'):(a[i]-'a'+10));
            }
            printf("%d", sum);
        }
        else
        {
            for(int i=1;i<l;i++)
            {
                sum *= 8;
                sum += (a[i]-'0');
            }
            printf("%d", sum);
        }
    }

    return 0;
}