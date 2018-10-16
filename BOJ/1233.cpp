#include <bits/stdc++.h>

using namespace std;

int a[81];

int main()
{
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    for(int i=1;i<=s1;i++)
        for(int j=1;j<=s2;j++)
            for(int k=1;k<=s3;k++)
                a[i+j+k]++;
    int mx = 0, n = s1+s2+s3;
    for(int i=3;i<=n;i++)
        if(a[mx]<a[i]) mx = i;
    printf("%d", mx);

    return 0;
}