#include <bits/stdc++.h>

using namespace std;

int cnt[501], tcnt[501];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<2*n-1;i++)
	{
		int tmp;
		cin >> tmp;
		cnt[tmp]++;
		tcnt[tmp]++;
	}
	int sum = 0;
	for(int i=1;i<n;i++)
		while(tcnt[i]/n>0 && sum+(tcnt[i]/n)*n<=n)
		{
			sum += (tcnt[i]/n)*n;
			tcnt[i] %= n;
		}
	for(int i=1;i<=(n-1)/2;i++)
		while(1)
		{
			bool check1 = false, check2 = false;
			int tmp1 = 0, tmp2 = 0;
			if(tcnt[i]==0)
				for(int j=i;j>=1;j--)
					if(i%j==0 && tcnt[j]>=(i/j))
					{
						tcnt[j] -= (i/j);
						check1 = true;
						tmp1 = j;
						break;
					}
			if(tcnt[n-i]==0)
				for(int j=n-i;j>=1;j--)
					if((n-i)%j==0 && tcnt[j]>=((n-i)/j))
					{
						tcnt[j] -= ((n-i)/j);
						check2 = true;
						tmp2 = j;
						break;
					}
			if((tcnt[i]==0 && !check1) || (tcnt[n-i]==0 && !check2))
			{
				if(check1) tcnt[tmp1] += (i/tmp1);
				if(check2) tcnt[tmp2] += ((n-i)/tmp2);
				break;
			}
			if(check1 && check2)
			{
				sum += (i/tmp1);
				sum += ((n-i)/tmp2);
			}
			else if(check1)
			{
				sum += (i/tmp1);
				sum++;
				tcnt[n-i]--;
			}
			else if(check2)
			{
				sum += ((n-i)/tmp2);
				sum++;
				tcnt[i]--;
			}
			else
			{
				sum += 2;
				tcnt[i]--;
				tcnt[n-i]--;
			}
		}
	while(n%2==0 && tcnt[n/2]>=2 && sum+2<=n)
	{
		sum += 2;
		tcnt[n/2] -= 2;
	}
	if(sum+cnt[0]>=n)
	{
		for(int i=1;i<n;i++)
			for(int j=0;j<cnt[i]-tcnt[i];j++)
				cout << i << " ";
		for(int i=0;i<n-sum;i++)
			cout << 0 << " ";
	}
	else cout << -1;

	return 0;
}