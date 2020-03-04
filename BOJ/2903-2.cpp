#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = 2;
    for(int i=0;i<n;i++)
        tmp = tmp*2-1;
    printf("%d", tmp*tmp);

    return 0;
}