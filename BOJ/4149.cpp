#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a;
    scanf("%lld", &a);
    unsigned long long tmp = a;
    bool flag = false;
    while(tmp%2==0)
    {
        tmp /= 2;
        printf("%d\n", 2);
        flag = true;
    }
    for(unsigned long long i=3;i*i<=tmp;i+=2)
        if(tmp%i==0)
        {
            tmp /= i;
            printf("%lld\n", i);
            flag = true;
            i -= 2;
        }
    if(tmp==1){if(!flag) printf("%lld", tmp);}
    else printf("%lld", tmp);

    return 0;
}