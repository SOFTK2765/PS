#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, c;
    char b;
    while(~scanf(" %d %c %d", &a, &b, &c))
    {
        if(a==0 && b=='W' && c==0) break;
        if(b=='W')
        {
            if(a-c<-200) printf("Not allowed\n");
            else printf("%d\n", a-c);
        }
        else
        {
            if(a+c<-200) printf("Not allowed\n");
            else printf("%d\n", a+c);
        }
    }

    return 0;
}