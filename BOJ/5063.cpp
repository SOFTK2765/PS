#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int r, e, c;
        scanf(" %d %d %d", &r, &e, &c);
        printf("%s\n", r-e+c<0?"advertise":r-e+c>0?"do not advertise":"does not matter");
    }

    return 0;
}