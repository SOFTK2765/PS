#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int num1 = 0, num2 = 1;
    for(int i=0;i<n;i++)
    {
        int tmp = num2;
        num2 = num1+num2;
        num1 = tmp;
    }
    printf("%d", num2);

    return 0;
}