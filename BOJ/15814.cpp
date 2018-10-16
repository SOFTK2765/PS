#include <bits/stdc++.h>

using namespace std;

char s[101];

int main()
{
    scanf("%s", s);
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        char tmp = s[a];
        s[a] = s[b];
        s[b] = tmp;
    }
    printf("%s", s);

    return 0;
}