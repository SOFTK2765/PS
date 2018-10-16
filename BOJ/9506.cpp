#include <bits/stdc++.h>

using namespace std;

int a[1000];

int main()
{
    while(1)
    {
        int n;
        scanf("%d ", &n);
        if(n==-1) break;
        int pos = 0;
        for(int i=2;i*i<n;i++)
            if(n%i==0)
            {
                a[pos++] = i;
                a[pos++] = n/i;
            }
        sort(a, a+pos);
        long long sum = 0;
        for(int i=0;i<pos;i++)
            sum += a[i];
        if(sum+1 == n)
        {
            printf("%d = %d", n, 1);
            for(int i=0;i<pos;i++)
                printf(" + %d", a[i]);
        }
        else printf("%d is NOT perfect.", n);
        printf("\n");
        for(int i=0;i<pos;i++)
            a[i] = 0;
    }

    return 0;
}