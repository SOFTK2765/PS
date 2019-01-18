#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        double x;
        scanf(" %lf", &x);
        if(x==-1) break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", x, x*0.167);
    }

    return 0;
}