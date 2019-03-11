#include <bits/stdc++.h>

using namespace std;

int cnt[11];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int tmp = i;
        while(tmp)
        {
            cnt[tmp%10]++;
            tmp /= 10;
        }
    }
    for(int i=0;i<=9;i++)
        printf("%d ", cnt[i]);

    return 0;
}