#include <bits/stdc++.h>

using namespace std;

const char coin[8][4] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};

char a[1001];
int cnt[8] = {};

int main()
{
    int p;
    scanf("%d", &p);
    while(p--)
    {
        memset(a, 0, sizeof(a));
        for(int i=0;i<8;i++)
            cnt[i] = 0;
        scanf(" %s", a);
        int l = strlen(a);
        for(int i=0;i<l-2;i++)
        {
            for(int j=0;j<8;j++)
                if(strncmp(a+i, coin[j], 3)==0)
                {
                    cnt[j]++;
                    break;
                }
        }
        for(int i=0;i<8;i++)
            printf("%d ", cnt[i]);
        printf("\n");
    }

    return 0;
}