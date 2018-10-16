#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double n;
        char s[2];
        scanf("%lf %s", &n, s);
        if(strcmp(s, "kg")==0) printf("%.4lf lb\n", n*2.2046);
        else if(strcmp(s, "lb")==0) printf("%.4lf kg\n", n*0.4536);
        else if(strcmp(s, "l")==0) printf("%.4lf g\n", n*0.2642);
        else if(strcmp(s, "g")==0) printf("%.4lf l\n", n*3.7854);
    }

    return 0;
}