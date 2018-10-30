#include <bits/stdc++.h>

using namespace std;

char a[251];

int main()
{
    char c;
    while(1)
    {
        scanf(" %c", &c);
        if(c=='#') break;
        scanf("%[^\n]s", a);
        int cnt = 0, l = strlen(a);
        for(int i=0;i<l;i++)
            if(a[i]==c || a[i]==c-'a'+'A') cnt++;
        printf("%c %d\n", c, cnt);
    }

    return 0;
}