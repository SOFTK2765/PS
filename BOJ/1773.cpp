#include <bits/stdc++.h>

using namespace std;

bool check[2000001];

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        int cnt = 1;
        while(tmp*cnt<=c)
        {
            check[tmp*cnt] = true;
            cnt++;
        }
    }
    int cnt = 0;
    for(int i=0;i<=c;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}