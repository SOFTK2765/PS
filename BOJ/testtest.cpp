#include <bits/stdc++.h>

using namespace std;

char a[1000];

int main()
{
    scanf("%s", a);
    int len = strlen(a);
    for(int i=0;i<len;i++)
        printf("%c", (a[i]-'a'+7)%26+'a');

    return 0;
}