#include <bits/stdc++.h>

using namespace std;

bool check[2000001];

int main()
{
    for(int i=3;i*i<=2000000;i+=2)
        if(!check[i])
            for(int j=i+i;j<=2000000;j+=i)
                check[j] = true;
    long long sum = 2;
    for(int i=3;i<=2000000;i+=2)
        if(!check[i]) sum += i;
    printf("%lld", sum);

    return 0;
}