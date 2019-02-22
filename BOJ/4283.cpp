#include <bits/stdc++.h>

using namespace std;

const int m[] = {3, 5, 8, 12, 20, 34, 57, 98, 170, 300, 536, 966, 1754, 3210, 5910, 10944, 20366, 38064, 71421, 134480, 254016};

int main()
{
    int y;
    while(1)
    {
        scanf(" %d", &y);
        if(y==0) break;
        int tmp = (y-1960)/10;
        printf("%d\n", m[tmp]);
    }

    return 0;
}