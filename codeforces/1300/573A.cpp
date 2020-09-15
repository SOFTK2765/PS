#include <bits/stdc++.h>

using namespace std;

int a[100001];

int gcd(int a, int b){return a%b?gcd(b, a%b):b;}

int main()
{
	int n;
	scanf("%d", &n);
	int g = -1;
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		if(g==-1) g = a[i];
		else g = gcd(g, a[i]);
	}
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		int tmp = a[i]/g;
		while(tmp%2==0) tmp /= 2;
		while(tmp%3==0) tmp /= 3;
		if(tmp!=1)
		{
			flag = true;
			break;
		}
	}
	printf("%s", flag?"No":"Yes");

	return 0;
}