#include <bits/stdc++.h>

using namespace std;

char a[21];

int main()
{
    scanf("%s", &a);
    int l = strlen(a);
    int sum = 0;
    for(int i=1;i<l;i++)
        sum += (pow(10, i-1)*9*i);
    sum += (atoi(a)-pow(10, l-1)+1)*l;
    printf("%d", sum);

    return 0;
}