#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    while(1)
    {   
        memset(a, 0, sizeof(a));
        gets(a);
        if(strcmp(a, "")==0) break;
        int l = strlen(a);
        int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        for(int i=0;i<l;i++)
        {
            if('a'<=a[i] && a[i]<='z') cnt1++;
            else if('A'<=a[i] && a[i]<='Z') cnt2++;
            else if('0'<=a[i] && a[i]<='9') cnt3++;
            else if(a[i]==' ') cnt4++;
        }
        printf("%d %d %d %d\n", cnt1, cnt2, cnt3, cnt4);
    }

    return 0;
}