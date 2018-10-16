#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double a;
        char b[500];
        memset(b, 0, sizeof(b));
        scanf("%lf", &a);
        gets(b);
        for(int i=1;b[i]!='\0';i+=2)
        {
            if(b[i]=='@') a *= 3;
            else if(b[i]=='%') a += 5;
            else if(b[i]=='#') a -= 7;
        }
        printf("%.2lf\n", a);
    }

    return 0;
}