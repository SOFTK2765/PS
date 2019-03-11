#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int l = a.length(), acnt = 0, bcnt = 0, aw = 0, bw = 0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='A') acnt++;
        else bcnt++;
        if(acnt==21 || bcnt==21)
        {
            printf("%d-%d\n", acnt, bcnt);
            if(acnt>bcnt) aw++;
            else bw++;
            acnt = 0;
            bcnt = 0;
        }
    }
    printf("%c", aw>bw?'A':'B');

    return 0;
}