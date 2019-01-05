#include <bits/stdc++.h>

using namespace std;

int res[3];

int sn(char a)
{
    if(a=='P') return 0;
    else if(a=='S') return 1;
    else return 2;
}

void f(char a, char b)
{
    int an = sn(a), bn = sn(b);
    res[((an-bn)+3)%3]++;
}

int main()
{
    char ml, mr, tl, tr;
    scanf("%c %c %c %c", &ml, &mr, &tl, &tr);
    f(ml, tl);
    f(ml, tr);
    if(res[0]==0 && res[2]==0)
    {
        printf("MS");
        return 0;
    }
    res[0] = res[1] = res[2] = 0;
    f(mr, tl);
    f(mr, tr);
    if(res[0]==0 && res[2]==0)
    {
        printf("MS");
        return 0;
    }
    res[0] = res[1] = res[2] = 0;
    f(tl, ml);
    f(tl, mr);
    if(res[0]==0 && res[2]==0)
    {
        printf("TK");
        return 0;
    }
    res[0] = res[1] = res[2] = 0;
    f(tr, ml);
    f(tr, mr);
    if(res[0]==0 && res[2]==0) printf("TK");
    else printf("?");

    return 0;
}