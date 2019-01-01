#include <bits/stdc++.h>

using namespace std;

char a[9];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %s", a);
        int l = strlen(a), tmp = 0;
        for(int i=l-1;i>=1;i--)
        {
            tmp += a[i]-'0';
            if(tmp>=5) tmp = 1;
            else tmp = 0;
        }
        printf("%d", tmp+a[0]-'0');
        for(int i=0;i<l-1;i++)
            printf("%d", 0);
        printf("\n");
    }

    return 0;
}