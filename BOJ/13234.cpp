#include <bits/stdc++.h>

using namespace std;

char a[10], b[10], c[10];

int main()
{
    scanf("%s %s %s", a, b, c);
    bool t1 = false, t2 = false;
    if(strcmp(a, "true")==0) t1 = true;
    if(strcmp(c, "true")==0) t2 = true;
    if(strcmp(b, "AND")==0) printf("%s", (t1 && t2)?"true":"false");
    else printf("%s", (t1 || t2)?"true":"false");

    return 0;
}