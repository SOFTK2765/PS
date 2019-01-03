#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc = 0;
    while(++tc)
    {
        char c1, c2;
        scanf(" %c %c", &c1, &c2);
        if(c1=='#' && c2=='#') break;
        printf("Case %d\n", tc);
        int n;
        scanf(" %d ", &n);
        for(int i=0;i<n;i++)
        {
            string a;
            getline(cin, a);
            int l = a.length();
            for(int j=0;j<l;j++)
                if(a[j]==c1 || a[j]==c2 || a[j]==c1-'a'+'A' || a[j]==c2-'a'+'A') printf("_");
                else printf("%c", a[j]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}