#include <bits/stdc++.h>

using namespace std;

char a[8];

int main()
{
    for(memset(a, 0, sizeof(a));~scanf(" %s", a);memset(a, 0, sizeof(a)))
    {
        int bb, ab;
        scanf(" %d %d", &bb, &ab);
        int l = strlen(a);
        int sum = 0;
        for(int i=0;i<l;i++)
        {
            sum *= bb;
            int tmp;
            if('0'<=a[i] && a[i]<='9') tmp = a[i]-'0';
            else tmp = a[i]-'A'+10;
            sum += tmp;
        }
        if(sum==0)
        {
            printf("      %c\n", '0');
            continue;
        }
        int d = 1;
        for(int i=0;i<6;i++)
            d *= ab;
        bool flag = false;
        while(d)
        {
            if(!flag && sum/d==0) printf(" ");
            else
            {
                flag = true;
                if(sum/d>=ab)
                {
                    printf("  ERROR");
                    break;
                }
                else if(0<=sum/d && sum/d<=9) printf("%c", (sum/d)+'0');
                else printf("%c", (sum/d)-10+'A');
            }
            sum %= d;
            d /= ab;
        }
        printf("\n");
    }

    return 0;
}