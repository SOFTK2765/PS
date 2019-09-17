#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    long long tmp = 1, sum = 0;
    for(int i=0;i<n;i++)
    {
        (sum += (((s[i]-'a'+1)*tmp)%1234567891)) %= 1234567891;
        (tmp *= 31) %= 1234567891;
    }
    printf("%lld", sum);

    return 0;
}