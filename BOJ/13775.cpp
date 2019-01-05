#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    scanf("%d ", &k);
    string a;
    getline(cin, a);
    int l = a.length();
    for(int i=0;i<l;i++)
        if('a'<=a[i] && a[i]<='z')
        {
            printf("%c", (a[i]-'a'-k+26)%26+'a');
            k = k%25+1;
        }
        else printf("%c", a[i]);

    return 0;
}