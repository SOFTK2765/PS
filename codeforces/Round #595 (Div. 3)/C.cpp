#include <bits/stdc++.h>

using namespace std;

bool check[39];

int main()
{
    vector<long long> candi;
    long long tmp = 1;
    while(tmp<=4e18)
    {
        candi.push_back(tmp);
        tmp *= 3;
    }
    int q, size = candi.size();
    scanf("%d", &q);
    while(q--)
    {
        memset(check, 0, sizeof(check));
        long long n;
        scanf(" %lld", &n);
        bool flag = false;
        for(int i=size-1;i>=0;i--)
        {
            if(n>=candi[i])
            {
                n -= candi[i];
                check[i] = true;
            }
            if(n==0)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
            for(int i=0;i<size;i++)
                if(!check[i])
                {
                    check[i] = true;
                    for(int j=i-1;j>=0;j--)
                        check[j] = false;
                    break;
                }
        long long res = 0;
        for(int i=0;i<size;i++)
            if(check[i]) res += candi[i];
        printf("%lld\n", res);
    }

    return 0;
}