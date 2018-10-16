#include <bits/stdc++.h>

using namespace std;

const char s[6][3] = {">", ">=", "<", "<=", "==", "!="};

int main()
{
    for(int i=1;;i++)
    {
        int a, b;
        char tmp[3] = {};
        scanf(" %d %s %d", &a, tmp, &b);
        if(strcmp(tmp, "E")==0) break;
        int tok;
        for(int j=0;j<6;j++)
        {
            if(strcmp(tmp, s[j])==0) tok = j;
        }
        switch(tok)
        {
            case 0:
                a>b?printf("Case %d: true\n", i):printf("Case %d: false\n", i);
                break;
            case 1:
                a>=b?printf("Case %d: true\n", i):printf("Case %d: false\n", i);
                break;
            case 2:
                a<b?printf("Case %d: true\n", i):printf("Case %d: false\n", i);
                break;
            case 3:
                a<=b?printf("Case %d: true\n", i):printf("Case %d: false\n", i);
                break;
            case 4:
                a==b?printf("Case %d: true\n", i):printf("Case %d: false\n", i);
                break;
            case 5:
                a!=b?printf("Case %d: true\n", i):printf("Case %d: false\n", i);
                break;
        }
    }

    return 0;
}