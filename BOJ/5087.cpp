#include <bits/stdc++.h>

using namespace std;

int main()
{
    int oc, ec = 0;
    while(1)
    {
        char tmp;
        scanf(" %c", &tmp);
        if(tmp=='#') break;
        else if(tmp=='*')
        {
            printf("%s\n", oc>ec?"Cheryl":oc<ec?"Tania":"Draw");
            oc = 0;
            ec = 0;
            continue;
        }
        else if(tmp=='A') oc++;
        else
        {
            if((tmp-'0')%2==0) ec++;
            else oc++;
        }
    }

    return 0;
}