#include <bits/stdc++.h>

using namespace std;

char s[51];

void swap(bool &a, bool &b)
{
    bool tmp = a;
    a = b;
    b = tmp;
    return;
}

int main()
{
    bool a = true, b = false, c = false;
    scanf("%s", s);
    int l = strlen(s);
    for(int i=0;i<l;i++)
        if(s[i]=='A') swap(a, b);
        else if(s[i]=='B') swap(b, c);
        else swap(a, c);
    printf("%d", a?1:b?2:3);

    return 0;
}