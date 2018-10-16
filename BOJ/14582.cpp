#include <bits/stdc++.h>

using namespace std;

int a[10], b[10];

int main()
{
    for(int i=0;i<9;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<9;i++)
        scanf(" %d", &b[i]);
    int asum = 0, bsum = 0;
    bool aflag = false, bflag = false;
    for(int i=0;i<9;i++)
    {
        asum += a[i];
        if(asum>bsum) aflag = true;
        if(aflag && asum<bsum) bflag = true;
        bsum += b[i];
        if(asum>bsum) aflag = true;
        if(aflag && asum<bsum) bflag = true;
    }
    if(aflag && bflag) printf("Yes");
    else printf("No");

    return 0;
}