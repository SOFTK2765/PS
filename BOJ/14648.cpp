#include <bits/stdc++.h>

using namespace std;

int arr[1001];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0;i<n;i++)
        scanf(" %d", &arr[i]);
    for(int i=0;i<q;i++)
    {
        int qq;
        scanf(" %d", &qq);
        int a, b, c, d;
        if(qq==1)
        {
            scanf(" %d %d", &a, &b);
            long long sum = 0;
            for(int k=a-1;k<=b-1;k++)
                sum += arr[k];
            printf("%lld\n", sum);
            int tmp;
            tmp = arr[a-1];
            arr[a-1] = arr[b-1];
            arr[b-1] = tmp;
        }
        else
        {
            scanf(" %d %d %d %d", &a, &b, &c, &d);
            long long sum = 0;
            for(int k=a-1;k<=b-1;k++)
                sum += arr[k];
            for(int k=c-1;k<=d-1;k++)
                sum -= arr[k];
            printf("%lld\n", sum);
        }
    }

    return 0;
}