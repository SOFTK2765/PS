#include <bits/stdc++.h>

using namespace std;

char a[256];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        scanf(" %[^\n]s", a);
        if(strcmp(a, "#")==0) break;
        int l = strlen(a), sum = 0;
        for(int i=0;i<l;i++)
            if(a[i]!=32) sum += ((i+1)*(a[i]-'A'+1));
        printf("%d\n", sum);
    }

    return 0;
}