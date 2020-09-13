#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		int s;
		scanf(" %lld %d", &n, &s);
		int sum = 0;
		long long tmp = n;
		while(tmp)
		{
			sum += tmp%10;
			tmp /= 10;
		}
		long long res = 0, pos = 0;
		tmp = n;
		while(tmp)
		{
			if(sum<=s) break;
			if(tmp%10==0)
			{
				tmp /= 10;
				pos++;
				continue;
			}
			res += (10-(tmp%10))*(long long)pow(10, pos);
			pos++;
			tmp /= 10;
			tmp++;
			long long ttmp = tmp;
			sum = 0;
			while(ttmp)
			{
				sum += ttmp%10;
				ttmp /= 10;
			}
		}
		printf("%lld\n", res);
	}

	return 0;
}