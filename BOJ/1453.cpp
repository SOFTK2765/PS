#include <bits/stdc++.h>

using namespace std;

bool com[101] = {};

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if(com[tmp]==true)
        {
            cnt++;
            continue;
        }
        com[tmp] = true;
    }
    printf("%d", cnt);

    return 0;
}