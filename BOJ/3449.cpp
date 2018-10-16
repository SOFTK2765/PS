#include <bits/stdc++.h>

using namespace std;

char a[101], b[101];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        scanf("%s %s", a, b);
        int l = strlen(a);
        int cnt = 0;
        for(int i=0;i<l;i++)
            if(a[i]!=b[i]) cnt++;
        printf("Hamming distance is %d.\n", cnt);
    }

    return 0;
}