#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    gets(a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
        if('a'<=a[i] && a[i]<='z') printf("%c", (a[i]-'a'+13)%26+'a');
        else if('A'<=a[i] && a[i]<='Z') printf("%c", (a[i]-'A'+13)%26+'A');
        else printf("%c", a[i]);

    return 0;
}