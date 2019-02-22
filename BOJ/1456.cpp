#include <bits/stdc++.h>

using namespace std;

bool check[10000001];
vector<long long> v;

long long bs(long long tmp, int k)
{
    long long lo = 0, hi = v.size()-1;
    while(lo<=hi)
    {
        long long mid = (lo+hi)/2;
        double res = pow(v[mid], k);
        if(res<tmp) lo = mid+1;
        else if(res>tmp) hi = mid-1;
        else return mid+1;
    }
    return lo;
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    v.push_back(2);
    for(int i=3;i<10000000;i+=2)
    {
        if(check[i]) continue;
        v.push_back(i);
        for(int j=i+i;j<10000000;j+=i)
            check[j] = true;
    }
    long long cnt = 0;
    for(int i=2;;i++)
    {
        long long res = bs(b, i);
        if(res==0) break;
        cnt += res;
    }
    for(int i=2;;i++)
    {
        long long res = bs(a-1, i);
        if(res==0) break;
        cnt -= res;
    }
    printf("%lld", cnt);
    
    return 0;
}