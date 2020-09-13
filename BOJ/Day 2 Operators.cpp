#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a;
	int b, c;
	cin >> a >> b >> c;
	cout << round(a+(a*b/100)+(a*c/100));

	return 0;
}