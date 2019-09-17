#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main()
{
    for(int i=3;i*i<1000000;i++)
        for(int j=i+i;j<1000000;j+=i)
            check[j] = true;
    int cnt = 1;
    for(int i=3;i<1000000;i+=2)
        if(!check[i] && ++cnt==10001)
        {
            printf("%d", i);
            break;
        }

    return 0;
}