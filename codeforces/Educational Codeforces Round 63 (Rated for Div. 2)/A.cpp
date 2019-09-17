#include <bits/stdc++.h>

using namespace std;

char a[300001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %c", &a[i]);
    int mn = 987654321;
    bool flag = false;
    for(int i=1;i<n;i++)
        if(a[i-1]>a[i])
        {
            printf("YES\n");
            printf("%d %d", i-1, i);
            return 0;
        }
    printf("NO");

    return 0;
}