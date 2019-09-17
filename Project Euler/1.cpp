#include <bits/stdc++.h>

using namespace std;

bool check[1001];

int main()
{
    for(int i=1;i<=1000;i++)
        if(i%3==0 || i%5==0) check[i] = true;
    int sum = 0;
    for(int i=1;i<1000;i++)
        if(check[i]) sum += i;
    printf("%d", sum);

    return 0;
}