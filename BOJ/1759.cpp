#include <bits/stdc++.h>

using namespace std;

const char check[] = {'a', 'e', 'i', 'o', 'u'};

char a[16];
char b[16];
bool visit[16];

int l, c;

void f(int pos, int ni)
{
    if(pos==l)
    {
        int cnt = 0;
        for(int i=0;i<l;i++)
            for(int j=0;j<5;j++)
                if(b[i]==check[j]) cnt++;
        if(cnt==0 || l-cnt<2) return;
        for(int i=0;i<l;i++)
            printf("%c", b[i]);
        printf("\n");
        return;
    }
    for(int i=ni;i<c;i++)
    {
        if(!visit[i])
        {
            visit[i] = true;
            b[pos] = a[i];
            f(pos+1, i+1);
            visit[i] = false;
        }
    }
}

int main()
{
    scanf("%d %d", &l, &c);
    for(int i=0;i<c;i++)
        scanf(" %c", &a[i]);
    sort(a, a+c);
    f(0, 0);

    return 0;
}