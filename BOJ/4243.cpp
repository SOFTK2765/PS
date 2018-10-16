#include <bits/stdc++.h>

using namespace std;

int t[101];

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int n, a;
        scanf(" %d %d", &n, &a);
        for(int i=1;i<n;i++)
            scanf(" %d", &t[i]);
        int posl = a-1, posr = a+1;
        long long sum = 0, lsum = t[a-1], rsum = t[a], tmp = 0;
        while(posl>1 && posr<n)
        {
            printf("sum : %d, tmp : %d, lsum : %lld, rsum : %lld\n", sum, tmp, lsum, rsum);
            if(lsum<rsum)
            {
                sum += (tmp+lsum);
                tmp += lsum;
                rsum += lsum;
                lsum = t[--posl];
            }
            else if(lsum>rsum)
            {
                sum += (tmp+rsum);
                tmp += rsum;
                lsum += rsum;
                rsum = t[posr++];
            }
            else
            {
                int tposl = posl, tposr = posr, tlsum = lsum, trsum = rsum;
                while(tposl>=1 && tposr<=n)
                {
                    printf("sum : %d, tmp : %lld, tlsum : %lld, trsum : %lld, tposl : %d, tposr : %d\n", sum, tmp, tlsum, trsum, tposl, tposr);
                    if(tlsum!=trsum)
                    {
                        if(tlsum>trsum)
                        {
                            while(posl>=tposl)
                            {
                                printf("r\n");
                                sum += (tmp+lsum);
                                tmp += lsum;
                                rsum += lsum;
                                lsum = t[--posl];
                            }
                        }
                        else
                        {
                            while(posr<=tposr)
                            {
                                printf("l\n");
                                sum += (tmp+rsum);
                                tmp += rsum;
                                lsum += rsum;
                                rsum = t[posr++];
                            }
                        }
                        break;
                    }
                    tlsum += t[--tposl];
                    trsum += t[tposr++];
                }
            }
        }
        while(posl>=1)
        {
            printf("sum : %d, lsum : %lld, rsum : %lld\n", sum, lsum, rsum);
            sum += (tmp+lsum);
            tmp += lsum;
            rsum += lsum;
            lsum = t[--posl];
        }
        while(posr<=n)
        {
            printf("sum : %d, lsum : %lld, rsum : %lld\n", sum, lsum, rsum);
            sum += (tmp+rsum);
            tmp += rsum;
            lsum += rsum;
            rsum = t[posr++];
        }
        printf("%lld\n", sum);
    }

    return 0;
}