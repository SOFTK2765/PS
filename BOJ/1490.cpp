#include <bits/stdc++.h>

using namespace std;

bool check[10];

int gcd(int a, int b)
{
	return a%b?gcd(b, a%b):b;
}

int main()
{
	string n;
	cin >> n;
	int l = n.length();
	for(int i=0;i<l;i++)
		check[i] = true;
	int s = 1*2*3*4*5*6*7*8*9;
	for(int i=1;i<=9;i++)
		s = gcd(s, i);
	long long 

	return 0;
}