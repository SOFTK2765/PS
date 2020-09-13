#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	long long n, cnt = 0;
	cin >> s >> n;
	int l = s.length();
	for(int i=0;i<l;i++)
		if(s[i]=='a') cnt += n/l;
	for(int i=0;i<n%l;i++)
		if(s[i]=='a') cnt++;
	printf("%lld", cnt);

	return 0;
}