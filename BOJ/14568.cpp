#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=1;i<n;i++)
        for(int j=2;j+i<n;j++)
            if(n-(i*2+j)>0 && (n-(i*2+j))%2==0) cnt++;
    printf("%d", cnt);

    return 0;
}