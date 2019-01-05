#include <bits/stdc++.h>

using namespace std;

string a[21], b[21];

int main()
{
    int an, bn, gn;
    scanf("%d %d %d", &an, &bn, &gn);
    for(int i=0;i<an;i++)
        cin >> a[i];
    for(int i=0;i<bn;i++)
        cin >> b[i];
    int sa = 0, sb = 0;
    for(int i=0;i<gn;i++)
    {
        string tmp;
        cin >> tmp;
        bool flag = false;
        for(int i=0;i<an && !flag;i++)
            if(a[i]==tmp)
            {
                sa++;
                flag = true;
            }
        for(int i=0;i<bn && !flag;i++)
            if(b[i]==tmp)
            {
                sb++;
                flag = true;
            }
    }
    printf("%s", sa>sb?"A":sa<sb?"B":"TIE");

    return 0;
}