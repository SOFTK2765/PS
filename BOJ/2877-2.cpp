#include <bits/stdc++.h>

using namespace std;

char a[100] = {};

int main()
{
    int k;
    scanf("%d", &k);
    k++;
    for(int i=0;;i++)
    {
        a[i] = k%2+'0';
        if(k/2==0) break;
        k /= 2;
    }
    int l = strlen(a);
    for(int i=0;i<l-1;i++)
        a[l-2-i]=='0'?printf("%d", 4):printf("%d", 7);

    return 0;
}