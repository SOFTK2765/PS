#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        string a;
        cin >> a;
        int l = a.length(), n = (int)sqrt(l);
        for(int i=n-1;i>=0;i--)
            for(int j=0;j<n;j++)
                printf("%c", a[j*n+i]);
        printf("\n");
    }

    return 0;
}