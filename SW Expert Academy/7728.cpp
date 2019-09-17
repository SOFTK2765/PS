#include <bits/stdc++.h>

using namespace std;

char a[11];
bool check[10];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf(" %s", &a);
        int l = strlen(a);
        for(int i=0;i<l;i++)
            check[a[i]-'0'] = true;
        int cnt = 0;
        for(int i=0;i<10;i++)
            if(check[i])
            {
                cnt++;
                check[i] = false;
            }
        printf("#%d %d\n", tc, cnt);
    }

    return 0;
}