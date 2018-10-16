#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, cnt = 0;
    scanf("%d %d", &n, &d);
    for(int i=1;i<=n;i++)
    {
        int tmp = i;
        while(tmp)
        {
            if(tmp%10==d) cnt++;
            tmp /= 10;
        }
    }
    printf("%d", cnt);

    return 0;
}