#include <bits/stdc++.h>

using namespace std;

const int a64[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};

long long gcd(long long a, long long b){return a%b?gcd(b, a%b):b;}

bool miller_rabin_64(long long n)
{
    if(n<2) return false;
    long long d = n-1, s = 0;
    while(d%2==0)
    {
        s++;
        d /= 2;
    }
    for(int i=0;i<7;i++)
    {
        if(n<=a64[i]) break;
        unsigned long long tmp = 1, mtmp = a64[i];
        long long td = d;
        while(td)
        {
            if(td%2) (tmp *= mtmp) %= n;
            (mtmp *= mtmp) %= n;
            td /= 2;
        }
        if(tmp==1 || tmp==-1 || tmp==n-1) continue;
        bool flag = false;
        for(int j=0;j<s;j++)
        {
            (tmp *= tmp) %= n;
            if(tmp==-1 || tmp==n-1)
            {
                flag = true;
                break;
            }
        }
        if(!flag) return false;
    }
    return true;
}

long long factor(long long n)
{
	if(miller_rabin_64(n)) return n;
	if(n==1) return 1;
	if(n%2==0) return 2;
	srand(time(NULL));
	long long x = (rand()%(n-2))+2, y = x, c = (rand()%(n-1))+1, g = 1;
	while(g==1)
	{
		x = ((__int128_t)x*x%n+c)%n;
		y = ((__int128_t)y*y%n+c)%n;
		y = ((__int128_t)y*y%n+c)%n;
		g = gcd(abs(x-y), n);
		if(g==n) return factor(n);
	}
	if(miller_rabin_64(g)) return g;
	else return factor(g);
}

int main()
{
	long long n;
	scanf("%lld", &n);
	map<long long, int> factors;
	while(n>1)
	{
		long long div = factor(n);
		factors[div]++;
		n /= div;
	}
	long long res = 1;
	for(map<long long, int>::iterator it=factors.begin();it!=factors.end();it++)
	{
		long long tmp1 = (long long)pow(it->first, it->second), tmp2 = (long long)pow(it->first, it->second-1);
		res *= (tmp1-tmp2);
	}
	printf("%lld", res);

	return 0;
}