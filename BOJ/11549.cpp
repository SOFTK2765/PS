#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int cnt = 0;
    for(int i=0;i<5;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(tmp==t) cnt++;
    }
    printf("%d", cnt);

    return 0;
}