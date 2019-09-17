#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mx = 0;
    for(int i=100;i<1000;i++)
        for(int j=100;j<1000;j++)
        {
            string tmp1 = to_string(i*j), tmp2 = tmp1;
            reverse(tmp2.begin(), tmp2.end());
            if(tmp1==tmp2) mx = max(mx, i*j);
        }
    printf("%d", mx);

    return 0;
}