#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        float f;
        char d, c, p;
        scanf("%f %c %c %c", &f, &d, &c, &p);
        if(d=='R') f *= 0.55;
        else if(d=='G') f *= 0.7;
        else if(d=='B') f *= 0.8;
        else if(d=='Y') f *= 0.85;
        else if(d=='O') f *= 0.9;
        else f *= 0.95;
        if(c=='C') f *= 0.95;
        if(p=='C') f = ((int)((f+0.05)*10))/(float)10;
        printf("$%.2f\n", f);
    }

    return 0;
}