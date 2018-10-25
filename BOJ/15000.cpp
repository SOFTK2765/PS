#include <bits/stdc++.h>

using namespace std;

char a[1000001];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
        printf("%c", a[i]+'A'-'a');

    return 0;
}