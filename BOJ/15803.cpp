#include <bits/stdc++.h>

using namespace std;

int x[3], y[3];

int main()
{
    for(int i=0;i<3;i++) scanf(" %d %d", &x[i], &y[i]);
    if(!((x[0]==x[1] && x[1]==x[2]) || (y[0]==y[1] && y[1]==y[2])))
    {
        double m = (1.0*(y[1]-y[0])/(x[1]-x[0]));
        if(y[2]-y[1]==(int)(m*(x[2]-x[1]))) printf("WHERE IS MY CHICKEN?");
        else printf("WINNER WINNER CHICKEN DINNER!");
    }
    else printf("WHERE IS MY CHICKEN?");

    return 0;
}