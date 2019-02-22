#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=n/3;i>=1;i--)
        for(int j=(n-i)/2;j>=i;j--)
            if(i+min((n-i-j), j)>max((n-i-j), j)) cnt++;
    printf("%d", cnt);

    return 0;
}