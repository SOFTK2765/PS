#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        scanf("%s ", a);
        if(strcmp(a, "0")==0) break;
        int l = strlen(a), n = 0;
        for(int i=0;i<l;i++)
            n += (a[i]-'0');
        while(n/10)
        {
            int sum = 0;
            while(n)
            {
                sum += (n%10);
                n /= 10;
            }
            n = sum;
        }
        printf("%d\n", n);
    }

    return 0;
}