#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    scanf("%d", &l);
    for(int i=0;i<l;i++)
    {
        int tmp1;
        char tmp2;
        scanf(" %d %c", &tmp1, &tmp2);
        for(int i=0;i<tmp1;i++)
            printf("%c", tmp2);
        printf("\n");
    }

    return 0;
}