#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        printf("%d ", tmp*i-sum);
        sum = tmp*i;
    }

    return 0;
}