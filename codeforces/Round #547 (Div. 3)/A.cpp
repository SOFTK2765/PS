#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int tmp = m/n, cnt = 0;
    if(m%n!=0)
    {
        printf("-1");
        return 0;
    }
    while(tmp%2==0)
    {
        tmp /= 2;
        cnt++;
    }
    while(tmp%3==0)
    {
        tmp /= 3;
        cnt++;
    }
    if(tmp!=1)
    {
        printf("-1");
        return 0;
    }
    printf("%d", cnt);

    return 0;
}