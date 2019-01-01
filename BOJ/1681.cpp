#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    int pos = 0;
    for(int i=1;pos<n;i++)
    {
        int ni = i;
        while(1)
        {
            if(ni%10==l) break;
            ni /= 10;
            if(ni==0)
            {
                pos++;
                break;
            }
        }
        if(pos==n) printf("%d", i);
    }

    return 0;
}