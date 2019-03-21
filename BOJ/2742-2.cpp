#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n;i>=1;i=~-i) printf("%d\n", i);

    return 0;
}