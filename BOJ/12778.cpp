#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m;
        char p;
        scanf(" %d %c", &m, &p);
        for(int i=0;i<m;i++)
        {
            if(p=='C')
            {
                char tmp;
                scanf(" %c", &tmp);
                printf("%d ", tmp-'A'+1);
            }
            else
            {
                int tmp;
                scanf(" %d", &tmp);
                printf("%c ", tmp+'A'-1);
            }
        }
        printf("\n");
    }

    return 0;
}