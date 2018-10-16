#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    int l;
    scanf("%d %s", &l, a);
    int sum = 0;
    for(int i=0;i<l;i++)
        sum += (a[i]-'A'+1);
    printf("%d", sum);

    return 0;
}