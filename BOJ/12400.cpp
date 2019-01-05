#include <bits/stdc++.h>

using namespace std;

const char trans[] = {'y', 'h', 'e', 's', 'o', 'c', 'v', 'x', 'd', 'u', 'i', 'g', 'l', 'b', 'k', 'r', 'z', 't', 'n', 'w', 'j', 'p', 'f', 'm', 'a', 'q'};

int main()
{
    int t;
    scanf("%d ", &t);
    for(int tc=1;tc<=t;tc++)
    {
        printf("Case #%d: ", tc);
        string a;
        getline(cin, a);
        int l = a.length();
        for(int i=0;i<l;i++)
            if('a'<=a[i] && a[i]<='z') printf("%c", trans[a[i]-'a']);
            else printf("%c", a[i]);
        printf("\n");
    }

    return 0;
}