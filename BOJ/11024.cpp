#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d ", &t);
    while(t--)
    {
        char a[500];
        memset(a, 0, sizeof(a));
        scanf("%[^\n]s", a);
        char * pch;
        pch = strtok (a, " ");
        int sum = 0;
        while (pch != NULL)
        {
            int l = strlen(pch);
            int num = 0;
            for(int i=0;i<l;i++)
            {
                num *= 10;
                num += pch[i]-'0';
            }
            sum += num;
            pch = strtok (NULL, " ");
        }
        printf("%d\n", sum);
    }

    return 0;
}