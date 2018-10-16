#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    for(int i=0;i<h;i++)
    {
        int cnt = -1;
        bool flag = false;
        for(int j=0;j<w;j++)
        {
            char tmp;
            scanf(" %c", &tmp);
            if(tmp=='c')
            {
                cnt = 0;
                flag = true;
            }
            else if(flag) cnt++;
            printf("%d ", cnt);
        }
        printf("\n");
    }

    return 0;
}