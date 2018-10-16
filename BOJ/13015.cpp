#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<i;j++)
            printf(" ");
        for(int j=0;j<n;j++)
            if(i==0) printf("*");
            else if(j==0 || j==n-1) printf("*");
            else printf(" ");
        for(int j=0;j<(n-i-1)*2-1;j++)
            printf(" ");
        for(int j=0;j<n;j++)
            if(i==0) printf("*");
            else if(j==0 || j==n-1) printf("*");
            else printf(" ");
        printf("\n");
    }
    for(int i=0;i<n-1;i++)
        printf(" ");
    printf("*");
    for(int i=0;i<n-2;i++)
        printf(" ");
    printf("*");
    for(int i=0;i<n-2;i++)
        printf(" ");
    printf("*\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-2;j++)
            printf(" ");
        for(int j=0;j<n;j++)
            if(i==n-2) printf("*");
            else if(j==0 || j==n-1) printf("*");
            else printf(" ");
        for(int j=0;j<i*2+1;j++)
            printf(" ");
        for(int j=0;j<n;j++)
            if(i==n-2) printf("*");
            else if(j==0 || j==n-1) printf("*");
            else printf(" ");
        printf("\n");
    }

    return 0;
}