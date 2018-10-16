#include <bits/stdc++.h>

using namespace std;

char a[256];

int main()
{
    memset(a, 0, sizeof(a));
    gets(a);
    int hcnt = 0, scnt = 0;
    char *tmp;
    tmp = strtok(a, ":");
    while(tmp != NULL)
    {
        if(*tmp=='-' && *(tmp+1)==')') hcnt++;
        else if(*tmp=='-' && *(tmp+1)=='(') scnt++;
        tmp = strtok(NULL, ":");
    }
    printf("%s", hcnt>scnt?"happy":hcnt<scnt?"sad":hcnt+scnt==0?"none":"unsure");

    return 0;
}