#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main()
{
    long long n = 600851475143;
    for(int i=3;i*i<=1000000;i++)
        for(int j=i+i;j<=1000000;j+=i)
            check[j] = true;
    for(int i=999999;i>=0;i-=2)
        if(!check[i] && n%i==0)
        {
            printf("%d", i);
            break;
        }


    return 0;
}