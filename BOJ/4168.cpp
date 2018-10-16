#include <bits/stdc++.h>

using namespace std;

char a[16][16];
bool scheck[16], gcheck[16];

int main()
{
    while(1)
    {
        for(int i=0;i<15;i++)
        {
            scheck[i] = false;
            gcheck[i] = false;
        }
        bool flag = false;
        for(int i=0;i<15;i++)
        {
            scanf("%s ", a[i]);
            if(strcmp(a[i], "END")==0)
            {
                flag = true;
                break;
            }
        }
        if(flag) break;
        for(int i=0;i<15;i++)
            for(int j=0;j<15;j++)
                if(a[i][j]=='#') scheck[j] = gcheck[i] = true;
        int scnt = 0, gcnt = 0;
        for(int i=0;i<15;i++)
        {
            if(scheck[i]) scnt++;
            if(gcheck[i]) gcnt++;
        }
        printf("%d\n", scnt<gcnt?scnt:gcnt);
    }

    return 0;
}