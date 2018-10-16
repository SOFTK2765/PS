#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=1;i<501;i++)
        for(int j=i;j<501;j++)
            if(j*j-i*i==n) cnt++;
    printf("%d", cnt);

    return 0;
}