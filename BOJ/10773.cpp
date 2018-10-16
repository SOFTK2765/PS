#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int k;
    scanf("%d", &k);
    int pos = 0;
    while(k--)
    {
        scanf(" %d", &a[pos]);
        if(a[pos]==0) pos--;
        else pos++;
    }
    int sum = 0;
    for(int i=0;i<pos;i++)
        sum += a[i];
    printf("%d", sum);

    return 0;
}