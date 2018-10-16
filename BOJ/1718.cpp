#include <bits/stdc++.h>

using namespace std;

char a[30001], b[300001];

int main()
{
    gets(a);
    gets(b);
    int pos = 0;
    char tmp = 1;
    int bl = strlen(b);
    while(tmp!=0)
    {
        tmp = a[pos];
        if(tmp==' ') a[pos] = ' ';
        else if(tmp==0) a[pos] = 0;
        else a[pos] = (((tmp-'a')-(b[pos%bl]-'a')+25)%26)+'a';
        pos++;
    }
    printf("%s", a);

    return 0;
}