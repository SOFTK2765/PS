#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        string a, b;
        cin >> a >> b;
        if(a=="E" && b=="E") break;
        int l = a.length(), aw = 0, bw = 0;
        for(int i=0;i<l;i++)
        {
            int an, bn;
            an = a[i]=='R'?0:a[i]=='S'?1:2;
            bn = b[i]=='R'?0:b[i]=='S'?1:2;
            if((an-bn+3)%3==2) aw++;
            else if((an-bn+3)%3==1) bw++;
        }
        printf("P1: %d\nP2: %d\n", aw, bw);
    }

    return 0;
}