#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        int p1 = 0, p2 = 0;
        int ac = 0, bc = 0;
        while(n--)
        {
            char a, b;
            int an, bn;
            scanf(" %c %c", &a, &b);
            a=='R'?(an=1):(a=='S'?an=0:an=2);
            b=='R'?(bn=1):(b=='S'?bn=0:bn=2);
            if((an-bn+3)%3==1) ac++;
            else if((an-bn+3)%3==2) bc++;
        }
        ac>bc?printf("Player 1\n"):((ac<bc)?printf("Player 2\n"):printf("TIE\n"));
    }

    return 0;
}