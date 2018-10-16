#include <bits/stdc++.h>

using namespace std;

char a[51];
bool cup[3] = {true, false, false};

void swap(bool *a, bool *b)
{
    bool tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='A') swap(&cup[0], &cup[1]);
        else if(a[i]=='B') swap(&cup[1], &cup[2]);
        else swap(&cup[0], &cup[2]);
    }
    for(int i=0;i<3;i++)
        if(cup[i]==true) printf("%d", i+1);

    return 0;
}