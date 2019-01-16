#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r, c;
    scanf("%d %d %d", &n, &r, &c);
    int res = 0;
    while(n--)
    {
        int target = (int)pow(2, n);
        if(target>r && target<=c) res += target*target;
        else if(target<=r && target>c) res += target*target*2;
        else if(target<=r && target<=c) res += target*target*3;
        r %= target;
        c %= target;
    }
    printf("%d", res);

    return 0;
}