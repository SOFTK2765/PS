#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    int cnt = 1;
    for(int i=0;i<l;i++)
        if(a[i]==',') cnt++;
    printf("%d", cnt);

    return 0;
}