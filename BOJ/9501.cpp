#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, d;
        scanf(" %d %d", &n, &d);
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            int v, f, c;
            scanf(" %d %d %d", &v, &f, &c);
            if(v*(1.0F*f/c)>=d) cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}