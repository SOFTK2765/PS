#include <bits/stdc++.h>

using namespace std;

char a[100001];

int main()
{
    int k, s;
    scanf("%d %d ", &k, &s);
    gets(a);
    for(int i=0;i<s;i++)
    {
        if('A'<=a[i] && a[i]<='Z') printf("%c", (a[i]-'A'+k)%26+'A');
        else if('a'<=a[i] && a[i]<='z') printf("%c", (a[i]-'a'+k)%26+'a');
        else printf("%c", a[i]);
    }

    return 0;
}