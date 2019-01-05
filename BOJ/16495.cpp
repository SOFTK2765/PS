#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int l = a.length();
    long long res = 0, mul = 1;
    for(int i=l-1;i>=0;i--)
    {
        res += mul*(a[i]-'A'+1);
        mul *= 26;
    }
    printf("%lld", res);

    return 0;
}