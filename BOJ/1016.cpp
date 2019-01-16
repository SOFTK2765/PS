#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main()
{
    long long mn, mx;
    scanf("%lld %lld", &mn, &mx);
    for(long long i=2;i*i<=mx;i++)
        for(long long j=i*i*((mn-1)/(i*i)+1);j<=mx;j+=i*i)
            check[j-mn] = true;
    int cnt = 0;
    for(int i=0;i<mx-mn+1;i++)
        if(!check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}