#include <bits/stdc++.h>

using namespace std;

char a[100001];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    list<char> li;
    for(int i=0;i<l;i++)
        li.push_back(a[i]);
    int n;
    scanf(" %d", &n);
    list<char>::iterator pos = li.end();
    for(int i=0;i<n;i++)
    {
        char tmp1;
        scanf(" %c", &tmp1);
        if(tmp1=='L' && pos!=li.begin()) pos--;
        else if(tmp1=='D' && pos!=li.end()) pos++;
        else if(tmp1=='B' && pos!=li.begin()) pos = li.erase(--pos);
        else if(tmp1=='P')
        {
            char tmp2;
            scanf(" %c", &tmp2);
            li.insert(pos, tmp2);
        }
    }
    for(pos=li.begin();pos!=li.end();pos++)
        printf("%c", *pos);

    return 0;
}