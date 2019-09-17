#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int l = 0, r = 0, sum = 0, cnt = 0;
    while(l<=r)
    {
        if(sum<n) sum += ++r;
        else if(sum>n) sum -= l++;
        else
        {
            cnt++;
            sum += ++r;
        }
    }
    printf("%d", cnt);

    return 0;
}