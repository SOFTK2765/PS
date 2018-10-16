#include <bits/stdc++.h>

using namespace std;

char a[5][16];

int main()
{
    for(int i=0;i<5;i++)
        scanf("%s", a[i]);
    int pos = 0;
    for(int i=0;i<16;i++)
        for(int j=0;j<5;j++)
            if(a[j][i]!='\0') printf("%c", a[j][i]);

    return 0;
}