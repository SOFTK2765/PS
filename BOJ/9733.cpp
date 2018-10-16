#include <bits/stdc++.h>

using namespace std;

char tmp[3];

int main()
{
    int cnt = 0, recnt = 0, ptcnt = 0, cccnt = 0, eacnt = 0, tbcnt = 0, cmcnt = 0, excnt = 0;
    while(~scanf(" %s", tmp))
    {
        cnt++;
        if(strcmp(tmp, "Re")==0) recnt++;
        else if(strcmp(tmp, "Pt")==0) ptcnt++;
        else if(strcmp(tmp, "Cc")==0) cccnt++;
        else if(strcmp(tmp, "Ea")==0) eacnt++;
        else if(strcmp(tmp, "Tb")==0) tbcnt++;
        else if(strcmp(tmp, "Cm")==0) cmcnt++;
        else if(strcmp(tmp, "Ex")==0) excnt++;
    }
    printf("Re %d %.2f\nPt %d %.2f\nCc %d %.2f\nEa %d %.2f\nTb %d %.2f\nCm %d %.2f\nEx %d %.2f\nTotal %d %.2f", recnt, 1.0*recnt/cnt, ptcnt, 1.0*ptcnt/cnt, cccnt, 1.0*cccnt/cnt, eacnt, 1.0*eacnt/cnt, tbcnt, 1.0*tbcnt/cnt, cmcnt, 1.0*cmcnt/cnt, excnt, 1.0*excnt/cnt, cnt, 1.0);

    return 0;
}