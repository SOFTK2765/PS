#include <bits/stdc++.h>

using namespace std;

int pn[10001];

int main()
{
    int pos = 0;
    pn[pos++] = 2;
    for(int i=3;i<10001;i+=2)
    {
        bool flag = ((i%2)?false:true);
        for(int j=3;j*j<=i;j+=2)
            if(i%j==0)
            {
                flag = true;
                break;
            }
        if(!flag) pn[pos++] = i;
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        int sn1 = n/2, sn2 = n/2, d = -1;
        if(n%2==1) sn2++;
        while(1)
        {
            d++;
            int pos = -1;
            bool flag = false;
            while(pn[++pos]<=sn1-d)
                if(pn[pos]==sn1-d)
                {
                    flag = true;
                    break;
                }
            if(!flag) continue;
            pos = -1;
            flag = false;
            while(pn[++pos]<=sn2+d)
                if(pn[pos]==sn2+d)
                {
                    flag = true;
                    break;
                }
            if(flag)
            {
                printf("%d %d\n", sn1-d, sn2+d);
                break;
            }
        }
    }

    return 0;
}