#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    for(int i=1;i<=100;i++)
        sum += i*i;
    printf("%d", (5050*5050)-sum);

    return 0;
}