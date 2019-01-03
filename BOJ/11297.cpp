#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d ", &tmp1, &tmp2, &tmp3);
        if(tmp1==0 && tmp2==0 && tmp3==0) break;
        int k = (tmp1+tmp2+tmp3)%25+1;
        string a;
        getline(cin, a);
        int l = a.length();
        for(int i=0;i<l;i++)
        {
            if('a'<=a[i] && a[i]<='z') printf("%c", ((a[i]-'a')-k+26)%26+'a');
            else printf("%c", a[i]);
        }
        printf("\n");
    }

    return 0;
}